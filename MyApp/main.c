#include <stdio.h>

int main(void) {

   int x = 0;

   printf("Please enter a number: ");
   scanf("%d", &x);

   printf("The number that you entered was: %d\n", x);
   printf("The address of the variable x is: %p\n", &x);

   return 0;
}
