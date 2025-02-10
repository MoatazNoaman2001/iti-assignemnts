#!/bin/bash


userrr=$(whoami)
mailfile="/var/mail/$userrr"


echo "check for mail boc for each 10 seconds"

prev_size=$(stat -c %s "$mailfile")

while true; do
	sleep 10
	current_size=$(stat -c %s "$mailfile")
	if [[ "$current_size" -gt "$prev_size" ]]; then
		echo "you jave new mail"
		prev_size=$current_size
	fi
done

