#!/bin/bash

mysq(){
	local n=$1
	echo $((n*n))
}

echo "sq(4): $(mysq 4)"
echo "sq(3): $(mysq 3)"
