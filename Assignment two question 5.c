#include <stdio.h>
/* Program code that prints all single digit numbers of base 16 (hexadecimal numbers)*/
int main() {
int h = 0; // Sets the first hexadecimal number h=0

while (h < 16) {
if (h < 10) {
putchar(h + '0'); //The value of h is increased by one for h <10
} else {
putchar(h - 10 + 'A'); //For value of h=10, h is equated to h=A
}
h++; //Post increments h by 1
} //while loop ends when h =16

putchar('\n');
return 0;
}
