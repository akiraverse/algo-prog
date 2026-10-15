#include <stdio.h>

int main(void) {

   char letterStart;
   scanf("%c", &letterStart);
   printf("enters '%c': %c%c\n", letterStart, letterStart, letterStart+1);

   return 0;
}