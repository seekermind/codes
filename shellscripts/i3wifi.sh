#!/bin/bash
if="wlp2s0"

wifi=$(cat /sys/class/net/${if}/operstate)
[[ "$wifi" == "down" ]] && exit 1

ssid=$(iw dev $if info | awk '/ssid/ { printf $2 }')

dload=$(echo "scale=3;`cat /sys/class/net/${if}/statistics/rx_bytes` /  1000000" | bc )

uload=$(echo "scale=3; `cat /sys/class/net/${if}/statistics/tx_bytes` / 1000000" | bc )


echo " $ssid(${dload}M ${uload}M)"
