#!/bin/bash
num=1
while [ $num -ne 1000000 ]
do
         ./rand2
         num=$(($num+1))
         sleep 1
done
