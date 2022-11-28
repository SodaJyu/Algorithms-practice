#include<stdio.h>

int main() {
   int a = 0;
   int count = 1;
   scanf("%d", &a);
   while (a > 9) {
    a /= 10;
    count++;
   }
   printf("%d\n", count);
   return 0;
}