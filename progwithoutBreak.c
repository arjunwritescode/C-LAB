//prog without break
#include<stdio.h>
int main(){
     int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    switch(n)
    {
        case 0:n=n+1;
        case 1:n=n+2;
        default: n=n+3;
    }

    printf("%d", n);
    } 
 
