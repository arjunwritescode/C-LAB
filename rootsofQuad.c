#include <stdio.h>
#include <math.h>
// float rootOne(float a, float b, float c)
// {
//     float rpos = ((-b) + sqrt((b * b) - (4 * a * c))) / (2 * a);
//     return rpos;
// }
// float rootTwo(float a, float b, float c)
// {
//     float rneg = ((-b) - sqrt((b * b) - (4 * a * c))) / (2 * a);
//     return rneg;
// }

// int main()
// {
//     float a1, b1, c1;
//     printf("Enter a, b, c for a quadtratic eq\n");
//     scanf("%f%f%f", &a1, &b1, &c1);
//     float root1 = rootOne(a1, b1, c1);
//     float root2 = rootTwo(a1, b1, c1);
//     printf("The roots are:%f and %f", root1, root2);
//     return 0;
// }
int main()
{
    float a, b, c, r1, r2, d;
    printf("enter the values of a b c\n");
    scanf("%f %f %f", &a, &b, &c);
    d = (b * b) - (4 * a * c);
    if (d > 0)
    {
        r1 = -b + sqrt((d) / (2 * a));
        r2 = -b - sqrt((d) / (2 * a));
        printf("the real roots=%f %f", r1, r2);
    }
    else if (d == 0)
    {
        r1 = -b / (2 * a);
        r2 = -b / (2 * a);
        printf("roots are equal =%f %f", r1, r2);
    }
    else
        printf("Roots are imaginary");
    return 0;
}
