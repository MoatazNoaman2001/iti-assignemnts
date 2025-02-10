#!/bin/bash

read -p "enter number of elements: " n

arr=()

for (( i =0; i<n; i++ )); do
	read -p "enter element $((i+1)): " item
	arr+=$item
done

echo "arr: ${arr[@]}"
