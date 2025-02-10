#!/usr/bin/bash
if [[ $# -lt 1 ]]
then
    ls
else
    dirArg=''
    if [[ $# -gt 1 ]]
    then
        dirArg=${@: -1}
    fi

    if [[ $1 == "-l" ]]
    then
        ls -l $dirArg
    elif [[ $1 == "-a" ]]
    then
        ls -a $dirArg
    elif [[ $1 == "-d" ]]
    then
        ls -d $dirArg
    elif [[ $1 == "-i" ]]
    then
        ls -i $dirArg
    elif [[ $1 == "-R" ]]
    then
        ls -R $dirArg
    else
        echo "this option isn't supported yet."
fi
fi
