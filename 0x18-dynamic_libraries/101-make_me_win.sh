#!/bin/bash
wget -P /usr https://github.com/Viestar/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libhacked.so
export LD_PRELOAD=/usr/libhacked.so
