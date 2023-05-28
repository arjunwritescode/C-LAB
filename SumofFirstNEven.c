#include<stdio.h>
int main()
{
    int i,n,s=0;
     printf("Enter the value of n ");
scanf("%d", &n);
 for(i=1;i<=n;i++)
 {
     if(i%2==0)
     s=s+i;
 }
 printf("The sum is %d", s);
 return 0;
}