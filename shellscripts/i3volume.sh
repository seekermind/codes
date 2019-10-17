#!/bin/bash

volume=$(pactl list sinks | awk '$1 ~ /Volume/ {print $5}')
jack=$(pacmd list-cards | awk '/analog-output-headphones/ {print $NF}')

if [ "${jack}" != "no)" ];
then
	echo " $volume"
else	
	echo " $volume"
fi

case $BLOCK_BUTTON in
	4) pactl set-sink-volume @DEFAULT_SINK@ +5% && pkill -SIGRTMIN+10 i3blocks ;;
	5) pactl set-sink-volume @DEFAULT_SINK@ -5% && pkill -SIGRTMIN+10 i3blocks ;;
esac
