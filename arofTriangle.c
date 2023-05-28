// area of triangle with input base and height
#include <stdio.h>
int main()
 {
 //area of traingle
 float b,h;
    printf("please enter base and height: ");
     scanf("%f%f", &b,&h);
 
 float ar1=0.5*(b*h);
 printf("The area of the triangle is %0.2f units", ar1);
 return 0;
 }