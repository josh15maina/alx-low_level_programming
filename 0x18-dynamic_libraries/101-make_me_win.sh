#!/bin/bash
wget -P /tmp https://github.com/josh15maina/alx-low_level_programming/blob/master/0x17-doubly_linked_lists/liball.so
export LD_PRELOAD=/tmp/liball.so
