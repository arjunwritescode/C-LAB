//convert character to lower case and if already the display apporpriate message
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a charcter\n");
    scanf("%c",&ch);
    if(ch >= 'A' && ch <= 'Z')
    {
    ch=tolower(ch);
    printf("The character is converted to A
    %c", ch);
    }
    else printf("The character is already in lower case");
    return 0;
}