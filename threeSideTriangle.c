//whether three sides forms a triangle or not and 1) find the area if its is a equilateral triangle 2)Find Perimeter if isoceles
//3)find both if scalene triangle
#include <stdio.h>
#include<math.h>
 int main(){
    int a,b,c;
    printf("ENTER THREE SIDES OF THE TRIANGLE");
scanf("%d %d %d", &a, &b, &c);
if((a+b > c)&&(b+c > a)&&(c+a > b))
{
if(a==b&& b==c && c==a)
{   printf("It is an equilateral triangle");
   int ar= (sqrt(3)*a*a)/4;
   printf("The Area is %d", ar);
}
else if(a==b || b==c || c==a)
{
    printf("It is an isoceles triangle");
    int p= a+b+c;
    printf("The perimeter is %d", p);
}
else if(a!=b&& b!=c && c!=a)
{ int semi, ar, per;
printf("It is an scalene triangle\n");
 semi= (a+b+c)/2;
 ar= sqrt(semi*(semi-a)*(semi-b)*(semi-c));
 per= a+b+c;
 printf("The area and the perimeter is %d and %d", ar, per);


}


}else printf("Its not a triangle");

 }
