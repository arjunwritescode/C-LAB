#include <stdio.h>

int main()
{
    int num, i, f=1;
    printf("Enter a number ");
    scanf("%d", &num);
    for (i = num; i >= 1; --i)
    {
     f=f*i;
    }
    printf("The factorial is %d", f);

    return 0;
}
