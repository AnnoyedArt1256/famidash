// This file was generated by compileVarTables.py



// Depends on mini
const uint8_t CUBE_WIDTH[] = {0x0F, 0x08};

// Depends on mini
const uint8_t CUBE_HEIGHT[] = {0x0F, 0x07};

// Depends on mini
const uint8_t WAVE_WIDTH[] = {0x08, 0x04};

// Depends on mini
const uint8_t WAVE_HEIGHT[] = {0x08, 0x04};

const uint8_t JUMP_VEL_lo[] = {0x53, 0xAD, 0x3A, 0xC6, 0x72, 0x8E, 0x32, 0xCE};
const uint8_t JUMP_VEL_hi[] = {0xF9, 0x06, 0xFA, 0x05, 0xFA, 0x05, 0xFB, 0x04};
#define JUMP_VEL(table_idx) (lohi_arr16_load(JUMP_VEL, table_idx))

const uint8_t UFO_JUMP_VEL_lo[] = {0x2D, 0xD3, 0xA0, 0x60, 0xD1, 0x2F, 0x31, 0xCF};
const uint8_t UFO_JUMP_VEL_hi[] = {0xFC, 0x03, 0xFC, 0x03, 0xFC, 0x03, 0xFD, 0x02};
#define UFO_JUMP_VEL(table_idx) (lohi_arr16_load(UFO_JUMP_VEL, table_idx))

const uint8_t ROBOT_JUMP_VEL_lo[] = {0xC7, 0x39, 0xC7, 0x39, 0x51, 0xAF, 0x51, 0xAF};
const uint8_t ROBOT_JUMP_VEL_hi[] = {0xFC, 0x03, 0xFC, 0x03, 0xFD, 0x02, 0xFD, 0x02};
#define ROBOT_JUMP_VEL(table_idx) (lohi_arr16_load(ROBOT_JUMP_VEL, table_idx))

// Depends on framerate
const uint8_t CUBE_SPEED_SLOW_lo[] = {0x70, 0x32};
#define CUBE_SPEED_SLOW_hi 0x01
#define CUBE_SPEED_SLOW(framerate) ( \
	__A__ = framerate, \
	__asm__("tay"), \
	__asm__("ldx %b \n lda %v, y", CUBE_SPEED_SLOW_hi, CUBE_SPEED_SLOW_lo), \
	__AX__ \
)

// Depends on framerate
const uint8_t CUBE_SPEED_X05_lo[] = {0xAD, 0x3A};
#define CUBE_SPEED_X05_hi 0x02
#define CUBE_SPEED_X05(framerate) ( \
	__A__ = framerate, \
	__asm__("tay"), \
	__asm__("ldx %b \n lda %v, y", CUBE_SPEED_X05_hi, CUBE_SPEED_X05_lo), \
	__AX__ \
)

// Depends on framerate
const uint8_t CUBE_SPEED_X1_lo[] = {0x52, 0xC3};
const uint8_t CUBE_SPEED_X1_hi[] = {0x03, 0x02};
#define CUBE_SPEED_X1(framerate) (lohi_arr16_load(CUBE_SPEED_X1, framerate))

// Depends on framerate
const uint8_t CUBE_SPEED_X2_lo[] = {0x21, 0x6F};
const uint8_t CUBE_SPEED_X2_hi[] = {0x04, 0x03};
#define CUBE_SPEED_X2(framerate) (lohi_arr16_load(CUBE_SPEED_X2, framerate))

// Depends on framerate
const uint8_t CUBE_SPEED_X3_lo[] = {0xFD, 0x27};
#define CUBE_SPEED_X3_hi 0x04
#define CUBE_SPEED_X3(framerate) ( \
	__A__ = framerate, \
	__asm__("tay"), \
	__asm__("ldx %b \n lda %v, y", CUBE_SPEED_X3_hi, CUBE_SPEED_X3_lo), \
	__AX__ \
)

// Depends on framerate
const uint8_t CUBE_SPEED_X4_lo[] = {0x23, 0x1C};
const uint8_t CUBE_SPEED_X4_hi[] = {0x06, 0x05};
#define CUBE_SPEED_X4(framerate) (lohi_arr16_load(CUBE_SPEED_X4, framerate))

// Depends on framerate
const uint8_t ROBOT_JUMP_TIME[] = {0x0F, 0x12};

const uint8_t UFO_MAX_FALLSPEED_lo[] = {0xC0, 0x40, 0xF9, 0x07, 0x1F, 0xE1, 0x4F, 0xB1};
const uint8_t UFO_MAX_FALLSPEED_hi[] = {0x03, 0xFC, 0x03, 0xFC, 0x03, 0xFC, 0x03, 0xFC};
#define UFO_MAX_FALLSPEED(table_idx) (lohi_arr16_load(UFO_MAX_FALLSPEED, table_idx))

const uint8_t CUBE_MAX_FALLSPEED_lo[] = {0x33, 0xCD, 0x33, 0xCD, 0xFD, 0x03, 0xFD, 0x03};
const uint8_t CUBE_MAX_FALLSPEED_hi[] = {0x07, 0xF8, 0x07, 0xF8, 0x05, 0xFA, 0x05, 0xFA};
#define CUBE_MAX_FALLSPEED(table_idx) (lohi_arr16_load(CUBE_MAX_FALLSPEED, table_idx))

const uint8_t CUBE_GRAVITY[] = {0x80, 0x80, 0x85, 0x7B, 0x6B, 0x95, 0x6F, 0x91};

const uint8_t SPIDER_MAX_FALLSPEED_lo[] = {0x33, 0xCD, 0x33, 0xCD, 0xFD, 0x03, 0xFD, 0x03};
const uint8_t SPIDER_MAX_FALLSPEED_hi[] = {0x07, 0xF8, 0x07, 0xF8, 0x05, 0xFA, 0x05, 0xFA};
#define SPIDER_MAX_FALLSPEED(table_idx) (lohi_arr16_load(SPIDER_MAX_FALLSPEED, table_idx))

const uint8_t SPIDER_GRAVITY[] = {0x5A, 0xA6, 0x5A, 0xA6, 0x4B, 0xB5, 0x4B, 0xB5};

const uint8_t UFO_GRAVITY[] = {0x3C, 0xC4, 0x3C, 0xC4, 0x32, 0xCE, 0x32, 0xCE};

const uint8_t BALL_GRAVITY[] = {0x55, 0xAB, 0x68, 0x98, 0x47, 0xB9, 0x57, 0xA9};

const uint8_t BALL_MAX_FALLSPEED_lo[] = {0x33, 0xCD, 0x33, 0xCD, 0xFD, 0x03, 0xFD, 0x03};
const uint8_t BALL_MAX_FALLSPEED_hi[] = {0x07, 0xF8, 0x07, 0xF8, 0x05, 0xFA, 0x05, 0xFA};
#define BALL_MAX_FALLSPEED(table_idx) (lohi_arr16_load(BALL_MAX_FALLSPEED, table_idx))

const uint8_t SWING_GRAVITY[] = {0x3C, 0xC4, 0x43, 0xBD, 0x32, 0xCE, 0x38, 0xC8};

const uint8_t SWING_MAX_FALLSPEED_lo[] = {0xC6, 0x3A, 0xC6, 0x3A, 0xCE, 0x32, 0xCE, 0x32};
const uint8_t SWING_MAX_FALLSPEED_hi[] = {0x05, 0xFA, 0x05, 0xFA, 0x04, 0xFB, 0x04, 0xFB};
#define SWING_MAX_FALLSPEED(table_idx) (lohi_arr16_load(SWING_MAX_FALLSPEED, table_idx))

const uint8_t SHIP_GRAVITY[] = {0x37, 0xC9, 0x38, 0xC8, 0x2E, 0xD2, 0x2F, 0xD1};

const uint8_t SHIP_MAX_FALLSPEED_lo[] = {0x33, 0xCD, 0x33, 0xCD, 0x7F, 0x81, 0x7F, 0x81};
const uint8_t SHIP_MAX_FALLSPEED_hi[] = {0x04, 0xFB, 0x04, 0xFB, 0x03, 0xFC, 0x03, 0xFC};
#define SHIP_MAX_FALLSPEED(table_idx) (lohi_arr16_load(SHIP_MAX_FALLSPEED, table_idx))

// Depends on framerate
const uint8_t JIMSHEATBALL_MAX_FALLSPEED_lo[] = {0x99, 0xFF};
const uint8_t JIMSHEATBALL_MAX_FALLSPEED_hi[] = {0x03, 0x02};
#define JIMSHEATBALL_MAX_FALLSPEED(framerate) (lohi_arr16_load(JIMSHEATBALL_MAX_FALLSPEED, framerate))

// Depends on framerate
const uint8_t JIMSHEATBALL_GRAVITY[] = {0x3E, 0x34};

// Depends on framerate
const uint8_t JIMSHEATBALL_JUMP_VEL_lo[] = {0xBA, 0x71};
const uint8_t JIMSHEATBALL_JUMP_VEL_hi[] = {0xFB, 0xFC};
#define JIMSHEATBALL_JUMP_VEL(framerate) (lohi_arr16_load(JIMSHEATBALL_JUMP_VEL, framerate))