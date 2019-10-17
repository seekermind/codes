#!/bin/bash
DIRECTORY=$(find /run/media/Series/ /run/media/Movies/ /run/media/game/ /run/media/Software/os/ -type d -maxdepth 1  2>/dev/null | dmenu -i -p "Directory: ")
transmission-remote -a "$@" -w "$DIRECTORY"
