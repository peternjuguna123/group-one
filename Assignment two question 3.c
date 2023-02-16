#include <stdio.h>
/* Program code that prints alphabets in lower case except q and e*/
int main() {
char Alphabet = 'a';

while (Alphabet <= 'z') {
if (Alphabet != 'e' && Alphabet != 'q') {
putchar(Alphabet);//function to exclude e and q
}
Alphabet++;
}

putchar('\n');
return 0;
}
