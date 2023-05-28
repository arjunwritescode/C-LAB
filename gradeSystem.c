#include<stdio.h>
int main (){
int marks;
printf ("Enter Marks scored: ");
scanf("%d",&marks);
char grd;
if (marks<=100 && marks>=90)
grd='O';
else if (marks<=89&&marks>=80)
grd='E';
else if (marks<=79&&marks>=70) 
grd='A';
else if (marks<=69&&marks>=60) 
grd='B';
else if (marks<=59&&marks>=50)
grd='C';
else if (marks<=49&&marks>=40 )
grd='D';
else if (marks<40&&marks>=0 )
grd='F';
else
grd='0';


if(grd>='A' && grd<='O' ) 
printf( "Grade obtained is: %c\n", grd);
else{
printf ("Invalid marks entered.\n");}
return 0;}
