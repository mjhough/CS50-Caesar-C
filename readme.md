# CS50-Caesar-C
An alphanumeric string encrypter in C for Harvard's CS50 course.

The program uses [Caesar's Cypher](https://en.wikipedia.org/wiki/Caesar_cipher) to encrypt strings.

### Instructions to run:
1. Compile the code by running the following command: `clang -fsanitize=signed-integer-overflow -fsanitize=undefined -ggdb3 -O0 -std=c11 -Wall -Werror -Wextra -Wno-sign-compare -Wshadow caesar.c -lcrypt -lcs50 -lm -o caesar`.

2. Run the compiled code by typing `./caesar <INTEGER ENCRYPTION KEY HERE>`, asssuming you are in the same directory as the compiled file.
