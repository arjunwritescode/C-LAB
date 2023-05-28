#include <stdio.h>
int main()
{
    float a, b;
    char ch;
    printf("Enter the respective symbols to perform the given functions: \n* : multiply\n/ : divide\n+ : add\n- : subtract\n");
    scanf("%c", &ch);
    printf("Enter the 1st number:\n ");
    scanf("%f", &a);
    printf("Enter the 2nd number:\n");
    scanf("%f", &b);
    switch (ch)
    {
    case '*':
    {
        printf("%0.2f X %0.2f = %0.2f", a, b, a * b);
        break;
    }
    case '/':
    {

        printf("%0.2f / %0.2f = %0.2f", a, b, a / b);
        break;
    }
    case '+':
    {
        printf("%0.2f + %0.2f = %0.2f", a, b, a + b);
        break;
    }
    case '-':
    {

        printf("%0.2f- %0.2f=%0.2f", a, b, a - b);
        break;
    }
    default:
        printf("invalid input");
    }
    return 0;
}