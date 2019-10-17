#!/bin/bash
disk=$(lsblk -lp | awk '/part $/ {print $1, "(" $4 ")" }' | dmenu -i -p "Which drive tomount?" | awk '{print $1}')
point=$(cat ~/.shellscripts/mountpoint | dmenu -i -p "Where?")
[[ "$point" = "" ]] && exit 1
if [[ ! -d $point ]];
then
	sudo mkdir $point
fi

sudo mount $disk $point 

