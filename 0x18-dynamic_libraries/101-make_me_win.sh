#!/bin/bash
wget .. https://github.com/HazemUsama/alx-low_level_programming/tree/main/0x18-dynamic_libraries/libwin.so
export LD_PRELOAD="$PWD/../libwin.so"
