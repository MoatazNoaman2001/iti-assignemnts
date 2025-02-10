#!/bin/bash

select op in "List file names: ls" "List with hedden: ls -a" "exit"; do
	case $REPLY in 
		1) ls ;;
		2) ls -a ;;
		3) echo "Exiting "; break ;;
		*) echo "unknown" ;;
	esac
done
