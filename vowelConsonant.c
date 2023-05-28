// check whether vowel consonant or not an alphabet
#include <stdio.h>

int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        printf("%c is an alphabet.", c);
        // checking if the character ch is a vowel or not
        if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U')
        {
            printf("The character %c is a vowel.\n", c);
        }

        else
        {
            printf("The character %c is a consonant.\n", c);
        }
    }
    else
    {
        printf("%c is not an alphabet.", c);
        
    }return 0;
}