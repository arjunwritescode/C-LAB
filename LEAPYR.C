 
//  #include<stdio.h>
//  boolean checkYear(int year) 
// { 
//     // If a year is multiple of 400, 
//     // then it is a leap year 
//     if (year % 400 == 0) 
//         return true; 
  
//     // Else If a year is multiple of 100, 
//     // then it is not a leap year 
//     if (year % 100 == 0) 
//         return false; 
  
//     // Else If a year is multiple of 4, 
//     // then it is a leap year 
//     if (year % 4 == 0) 
//         return true; 
//     return false; 
// 
#include <stdio.h>
int main() {
   int year;
   printf("Enter a year: ");
   scanf("%d", &year);

   // leap year if perfectly divisible by 400
   if (year % 400 == 0) {
      printf("%d is a leap year.", year);
   }
   // not a leap year if divisible by 100
   // but not divisible by 400
   else if (year % 100 == 0) {
      printf("%d is not a leap year.", year);
   }
   // leap year if not divisible by 100
   // but divisible by 4
   else if (year % 4 == 0) {
      printf("%d is a leap year.", year);
   }
   // all other years are not leap years
   else {
      printf("%d is not a leap year.", year);
   }

return 0;
}