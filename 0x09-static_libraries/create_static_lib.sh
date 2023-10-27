#!/bin/bash

for file in *.c;
do 
	gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c "$file"
done

ar -rc liball.a *o
