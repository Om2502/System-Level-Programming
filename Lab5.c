#!/bin/bash

#Check Error Script

echo "Try to find out some errors!!!"

echo "The regex [^a]*ce can match the string(s):"> Result
grep '^[^a]*ce$' << END >> Result

lance
ace
brace
decide
piece
-ENDHERE

ls mail $1 < Result

echo "The result has been sent to $1@student.gsu.edu"
echo "Congratulations! You have corrected all the errors!"

t