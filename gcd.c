#include <stdio.h>

int gcd(int a, int b) {
   int remainder;
   while (b != 0) {
      remainder = a % b;
      a = b;
      b = remainder;
   }
   return a;
}

int main() {
   int num1, num2;
   printf("Enter two positive integers: ");
   scanf("%d %d", &num1, &num2);
   printf("GCD of %d and %d is %d\n", num1, num2, gcd(num1, num2));
   return 0;
}
