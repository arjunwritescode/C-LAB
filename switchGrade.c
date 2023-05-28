// gradesystem using switch
#include <stdio.h>
int main()
{
    int marks;
    printf("Enter Marks scored: ");
    scanf("%d", &marks);
    char grd;
    switch (marks / 10)
    {
    case 10:
    case 9:
        grd = 'O';
        break;
    case 8:
        grd = 'E';
        break;
    case 7:
        grd = 'A';
        break;
    case 6:
        grd = 'B';
        break;
    case 5:
        grd = 'C';
        break;
    case 4:
        grd = 'D';
        break;
    case 3:
    case 2:
    case 1:
        grd = 'F';
        break;
    default:
        grd = 'N';
    }

    if (grd >= 'A' && grd <= 'O')
        printf("Grade obtained is: %c\n", grd);
    else
    {
        printf("Invalid marks entered.\n");
    }
    return 0;
}