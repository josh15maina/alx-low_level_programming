#!/bin/bash
wget -qO /tmp/jackpot.so https://raw.github.com/josh15maina/alx-low_level_programming/master/0x18-dynamic_libraries/jackpot.so
export LD_PRELOAD=/tmp/jackpot.so
