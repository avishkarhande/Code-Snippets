#!/bin/bash

# Multiple ways to print a random number from 1-6 for learning purposes

# Shuf way (personal favorite)
shuf -i 1-6 -n 1

# Pure bash way
# $RANDOM gives a pseudorandom integer from 1-32767
echo $((1 + $RANDOM % 6))

# Perl way
perl -e 'print int rand 6, "\n"; '
