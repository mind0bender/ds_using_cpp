#!/bin/bash

filename="./practical$1.cpp"

if [ -z $filename ]; then
    echo "Please provide a file name"
    exit 1
else
    if [ ! -f $filename ]; then
        echo "File not found!"
        echo "$filename"
        exit 1
    else 
        g++ -std=c++11 -o "practical$1" "$filename"
        "./practical$1"
    fi
fi

echo "running "$1