#!/bin/bash
wget -P .. https://github.com/HazemUsama/Media-Player/blob/main/libwin.so
export LD_PRELOAD="$PWD/../libwin.so"
