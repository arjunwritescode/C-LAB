//WAP TO DISPLAY ASCII VALUES OF THE ENTERED CHARACTER
#include <stdio.h>

int main() {
    char ch;
    printf("Please Enter a character: ");
    scanf("%c", &ch);
    printf("The ASCII value of %c is %d\n", ch, ch);
    return 0;
}