#!/bin/bash

find . -name "*.c" -type f -exec gcc -Wall -Wextra -Werror -c {} \;
ar rcs libft.a *.o