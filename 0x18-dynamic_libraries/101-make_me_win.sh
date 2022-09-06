#!/bin/bash
wget -P /tmp https://github.com/MissTipo/alx-low_level_programming/blob/main/0x18-dynamic_libraries/101-make_me_win.sh
export LD_PRELOAD=/tmp/numbers.so
