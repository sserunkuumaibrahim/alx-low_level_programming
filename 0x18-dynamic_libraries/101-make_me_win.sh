#!/bin/bash
wget -P .. https://raw.githubusercontent.com/monoprosito/holbertonschool-low_level_programming/master/0x18-dynamic_libraries/libgiga.soexport LD_PRELOAD="$PWD/../libgiga.so"
