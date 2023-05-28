#include<stdio.h>

int max(int a, int b, int c)
{
    int mid;
    if (a > b)
    {
        mid = a;
    }
    else if (b > a)
    {
        mid = b;
    }

    if (c > mid)
        return c;
    else
        return mid;
}
int min(int a, int b, int c)
{
    int mid;
    if (a < b)
    {
        mid = a;
    }
    else if (b < a)
    {
        mid = b;
    }

    if (c < mid)
        return c;
    else
        return mid;
}

int main()
{
    printf("Enter Three Numbers\n");
    int a, b, c, sum, middle;
    scanf("%d%d%d", &a, &b, &c);
    int max1 = max(a, b, c);
    int min1= min(a,b,c);
    sum=a+b+c;
    middle=sum-(max1+min1);
    printf("The largest number is %d. \n The middle number is %d.\n The smallest number is %d.\n", max1, middle, min1);
    return 0;
}
