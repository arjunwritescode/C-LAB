//sum of the digits power to the number of digits
#include <stdio.h>
#include<math.h>
int main()
{
    int num, n, n1,n2,c=0, sum=0;
    printf("Enter a number ");
    scanf("%d", &num);
    n1 = num;
    n2= num;

    while (num != 0)
    {
        c++;
        num /= 10;
    }
     while (n1!= 0)
    {
        n = num % 10;
        sum= sum + pow(n,c);
        num /= 10;
    }
    if (sum == n2)
        printf("The number %d is an armstrong number", n1);
    else
     printf("the number is not armstrong");
      return 0;
}
    

