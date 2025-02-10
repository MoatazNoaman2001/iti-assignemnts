#!/bin/bash

echo "enter str"
read str


case "$str" in
    "")
        echo "You entered Nothing"
        ;;
    *[!A-Z]*)
        if [[ "$str" =~ ^[a-z]+$ ]]; then
            echo "You entered lower cases"
        elif [[ "$str" =~ ^[0-9]+$ ]]; then
            echo "You entered numbers."
        elif [[ "$str" =~ ^[A-Za-z0-9]+$ ]]; then
            echo "You entered a Mix."
        else
            echo "You entered a special character or symbol."
        fi
        ;;
    [A-Z]*)
	    echo "You entered upper cases."
	    ;; 
    *)
        echo "You entered a special character or symbol."
        ;;
esac
