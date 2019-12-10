#!/bin/bash
	echo " $(cat /sys/class/backlight/intel_backlight/brightness)"

case $BLOCK_BUTTON in
	4) xbacklight -inc 5 && pkill -SIGRTMIN+10 i3blocks;;
	5) xbacklight -dec 5 && pkill -SIGRTMIN+10 i3blocks;;
esac
