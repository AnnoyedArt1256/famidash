@echo off

setlocal EnableDelayedExpansion
cd "%~dp0"
set n=0
SET all_levels= ^
    stereomadness ^
    backontrack ^
    polargeist ^
    dryout ^
    baseafterbase ^
    cantletgo ^
    jumper ^
    timemachine ^
    cycles ^
    xstep ^
    clutterfunk ^
    theoryofeverything ^
    electroman ^
    clubstep ^
    electrodynamix ^
    hexagonforce ^
    blastprocessing ^
    toe2 ^
    retray ^
    sonar ^
    thechallenge ^
    leveleasy ^
    dreamer ^
    kappaclysm ^
    revolution ^
    thelightningroad ^
    nightmare ^
    demonpark ^
    deathmoon ^
    decode ^
    dearnostalgists ^
    problematic ^
    firetemple ^
    eon ^
    pgclubstep ^
    stalemate ^
    luckydraw ^
    test4 ^


echo Exporting everything %all_levels%
python export_levels.py --folder "%ownpath%LEVEL DATA" %all_levels%

echo Export finished.
pause
