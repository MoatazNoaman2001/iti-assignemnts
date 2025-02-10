#!/bin/bash

read -p "enter number of elements: " n

arr=()
sum=0

for (( i =0; i<n; i++ )); do
	read -p "enter element $((i+1)): " item
	arr+=$item
	sum=$sum+$item
done

echo $(echo "scale=2;$sum/$n" | bc -l)
echo "arr: ${arr[@]}"

