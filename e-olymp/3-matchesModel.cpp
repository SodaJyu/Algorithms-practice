#include<stdio.h>

int main() {
   int a = 0;
   int count = 0;
   scanf("%d", &a);
   if (a == 1) return 12;
   for (int i = 1; i <= a; i++) {
    if (i == 1) {
        count += 12;
    } else {
        count += 8;
    }
   }
   printf("%d\n", count);
   return 0;
}