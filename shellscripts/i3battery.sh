#!/bin/bash
num=$(echo "scale=3; (`cat /sys/class/power_supply/BAT1/charge_now` * 100 ) / `cat /sys/class/power_supply/BAT1/charge_full_design`" | bc)

plug=$(acpi -a | awk '{print $NF}')
if [ "$plug" != "off-line" ]
then	
	echo " ${num}%"
else
	echo " ${num}%"
fi
