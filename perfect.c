//sum of perfect divisors equal to number
#include <stdio.h>

int main()
{
    int num, i, n1, sum = 0;
    printf("Enter a number ");
    scanf("%d", &num);
    for (i = 1; i <= (num - 1); i++)
    {
        if (num % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == num)
        printf("Its is a perfect number");
    else
        printf("It is not a perfect number");
}
