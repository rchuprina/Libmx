cp inc/libmx.h .
clang -std=c11 -Wall -Wextra -Werror -Wpedantic  -c main.c -I libmx.h
clang -std=c11 -Wall -Wextra -Werror -Wpedantic main.o obj/*
rm main.o
./a.out
