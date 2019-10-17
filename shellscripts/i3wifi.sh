#!/bin/bash

wifi=$(iw dev wlp2s0 link | awk -F ":" '/SSID/ {print $NF}')
[[ -z $wifi ]] && exit 1
dload=$(echo "scale=3;`iw dev wlp2s0 link | awk '/RX/ {print $2}'` /  1000000" | bc )
uload=$(echo "scale=3; `iw dev wlp2s0 link | awk '/TX/ {print $2}'` / 1000000" | bc )
echo " $wifi(${dload}M ${uload}M)"
