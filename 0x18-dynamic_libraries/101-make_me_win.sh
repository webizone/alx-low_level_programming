#!/bin/bash
wget -O /tmp/winner.so https://github.com/webizone/alx-low_level_programming/raw/master/0x18-dynamic_libraries/winner.so
export LD_PRELOAD=/tmp/winner.so
