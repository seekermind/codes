#!/bin/bash
num=$(echo "scale=2; (`cat /sys/class/power_supply/BAT1/charge_now` * 100 ) / `cat /sys/class/power_supply/BAT1/charge_full_design`" | bc)

plug=$(cat /sys/class/power_supply/BAT1/status)
if [ "$plug" != "Discharging" ]
then	
	echo " ${num}%"
else
	echo " ${num}%"
fi
