//Largest of THREE nums
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

 int main()
{
    printf("Enter Three Numbers\n");
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int max1 = max(a, b, c);
    printf("Largest number is %d", max1);
    return 0;
}
