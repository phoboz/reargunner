#!/bin/sh
awk -v ship="$1" -f gen_ship.awk < script.txt > run_script.sh
sh run_script.sh
rm -rf run_script.sh
