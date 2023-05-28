//sum of factorial of digits equal to number
#include <stdio.h>

int main()
{
    int num, n, n1, i, f, sum = 0;
    printf("Enter a number ");
    scanf("%d", &num);
    n1 = num;
    while (num != 0)
    {
        n = num % 10;
        f = 1;
        for (i = n; i >= 1; --i)
        {
            f = f * i;
        }
        sum += f;
        num /= 10;
    }
    if (n1 == sum)
        printf("The number is strong number");
        else printf("the umber is not strong number");
    return 0;
}
