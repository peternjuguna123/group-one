#include <stdio.h>
/* a program that prints single digit numbers between 0 and 10*/
int main() {
int n = 0; //Sets the first number as 0. Only whole numbers will be printed.

while (n <= 9) {
printf("%d", n);
n++; //A post increment on n by 1
printf("\n");
 }
return 0;
}
