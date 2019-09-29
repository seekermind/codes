#!/bin/bash

SUBNET=192.168.0
for ip in $(seq 2 200);do
	ping -c 1 $SUBNET.$ip
	if [ $? = 0 ]
	then
		echo "$SUBNET.$ip is up" >> list
	fi
done
cat list
