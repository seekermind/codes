#!/bin/bash

GREETING="Welcome"
user=$(whoami)
day=$(date +%A)
read -p "Enter your input: " FNAME LNAME
echo "$GREETING back $FNAME $LNAME as ${user}! Today is $day "
echo "your bash: $BASH which is $BASH_VERSION"
