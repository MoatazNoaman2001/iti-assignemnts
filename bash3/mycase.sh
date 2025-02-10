#!/bin/bash

echo "enter char"
read char

case $char in
	[A-Z]) 
		echo "this uppercase"
		;;
	[a-z])
		echo "this lowercase"
		;;
	[1-9])
		echo "this nomeric"
		;;
	"")
		echo "this nothing"
		;;
	*)
		echo "unknown"
		;;
esac

