#!/bin/bash

if [ "$#" -eq 0 ]; then 
	cd ~ || exit 1
else 
	cd "$1" || exit 1
fi 
