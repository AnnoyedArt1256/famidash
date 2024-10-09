; Startup code for cc65 and Shiru's NES library
; based on code by Groepaz/Hitmen <groepaz@gmx.net>, Ullrich von Bassewitz <uz@cc65.org>

; Linker generated symbols
	.import VERSION, TOTAL_SONGS, START_SONG, NTSC_RATE, PAL_RATE, REGION, SOUND_EXP, NSF2_FEATURES
	
	.import START_BANK_0, START_BANK_1, START_BANK_2, START_BANK_3, START_BANK_4, START_BANK_5, START_BANK_6, START_BANK_7
	.import FIRST_MUSIC_BANK, FIRST_DMC_BANK
	.import PRGDATASIZE

SFX_STRINGS = 0


.include "zeropage.inc"
.include "music_songlist.inc"
.include "sfx_sfxlist.inc"

.segment "ZEROPAGE"
NTSC_MODE: 			.res 1
PLAYBACK_MODE:		.res 1 ; Bit 7 for PCM, bit 6 for finished PCM
.segment "BSS"
current_song_bank:	.res 1
sampleID:			.res 1

;
; NSF2 header
;
.segment "HEADER"

	LOAD_ADDR = $8000	; In case of bankswitching, indicates amount of padding from the start of the ROM
	INIT_ADDR = init
	PLAY_ADDR = play

	.byte 'N', 'E', 'S', 'M', $1A ; ID
	.byte <VERSION
	.byte <TOTAL_SONGS
	.byte <START_SONG
	.word .loword(LOAD_ADDR)
	.word .loword(INIT_ADDR)
	.word .loword(PLAY_ADDR)
	.asciiz "Famidash"
	.repeat 31 - 8
		.byte $00
	.endrepeat
	.asciiz "OG by 9 ppl, covers by 7 ppl"
	.repeat 31 - 28
		.byte $00
	.endrepeat
	.asciiz "(c) TFDSoft 2023-2024"
	.repeat 31 - 21
		.byte $00
	.endrepeat
	.word .loword(NTSC_RATE)
	.byte <START_BANK_0, <START_BANK_1, <START_BANK_2, <START_BANK_3, <START_BANK_4, <START_BANK_5, <START_BANK_6, <START_BANK_7
	.word .loword(PAL_RATE)
	.byte <REGION
	.byte <SOUND_EXP
	.byte <NSF2_FEATURES
	.byte <PRGDATASIZE, >PRGDATASIZE, ^PRGDATASIZE


.segment "STARTUP"

init:

	; lda PPU_STATUS
	; and #$80
	; sta <NTSC_MODE
	dex
	stx <NTSC_MODE
	
	cmp #(song_max+sfx_max)
	bcs pcm_init
	
	ldy #0
	sty PLAYBACK_MODE
	
	cmp #song_max
	bcs sfx_init
    JMP _music_play	

sfx_init:
	; The carry is set
	SBC #song_max
	pha
	JSR famistudio_init_for_sfx
	
    LDA #<.bank(sounds)
    JSR mmc3_tmp_prg_bank_1
    
	ldx #<sounds
	ldy #>sounds
	JSR famistudio_sfx_init
	
	PLA
	LDX #0
	JMP famistudio_sfx_play

pcm_init:
	; The carry is set
	sbc #(song_max+sfx_max)
	sta sampleID
	lda #$80
	sta PLAYBACK_MODE
play_return:
	rts
	
play:
	BIT PLAYBACK_MODE
	bvs play_return
	bmi pcm_play
	jmp _music_update
pcm_play:
	LDA sampleID
	DEC PLAYBACK_MODE
	JMP _playPCM
	
	.include "nsfmapper.s"
	.include "nsfdash.s"
		
.segment "DMC_BANK_00"
	.incbin "MUSIC/EXPORTS/music_bank0.dmc"
.segment "DMC_BANK_01"
	.incbin "MUSIC/EXPORTS/music_bank1.dmc"

.include "famistudio_ca65.s"
	

.segment "PCM_BANK"
GeometryDashPCMA:
	.incbin "MUSIC/PCM/geometry-dash2.pcm"
	.byte $00

.segment "PCM_BANK_B"
GeometryDashPCMB:
	.incbin "MUSIC/PCM/fire2.pcm"
	.byte $00


; Store music a switchable PRG bank
; .s files, as generated by FamiStudio through the export menu
.segment "MUS_BANK_00"
	.include "MUSIC/EXPORTS/music_1.s"
.segment "MUS_BANK_01"
	.include "MUSIC/EXPORTS/music_2.s"
.segment "MUS_BANK_02"
	.include "MUSIC/EXPORTS/music_3.s"
.segment "MUS_BANK_03"
	.include "MUSIC/EXPORTS/music_4.s"
.segment "MUS_BANK_04"
	.include "MUSIC/EXPORTS/music_5.s"

.segment "SFX_BANK"
	.include "MUSIC/EXPORTS/sfx.s"

.segment "METADATA"
	.include "metadata.s"