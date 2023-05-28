#include<stdio.h>
int main(){
    int a, b;
    printf("Please enter two numbers:" );
    scanf("%d%d", &a, &b);
    if(a>b)
    printf("%d is the larger number\n", a);
    else
    printf("%d is the larger number\n", b);
    return 0;

}
