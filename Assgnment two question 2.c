#include <stdio.h>
/* This program prints all alphabets in lower case then in upper case*/
int main() {
char letter = 'a';
//code for lower case alphabets.
while (letter <= 'z') {
putchar(letter);
letter++;
}
//code for upper case alphabets.
letter = 'A';

while (letter <= 'Z') {
putchar(letter);
letter++;
}

putchar('\n');
return 0;
}
