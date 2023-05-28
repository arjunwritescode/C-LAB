#include <stdio.h>
int main()
{
    int a[50], i, x, n;
    printf("Enter the size of the array");
    scanf("%d", &n);
    printf("Enter the array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[x]);
    }
    printf("Enter the element to be searched in the array \n");
    scanf("%d", &x );
    for(i=0;i<n;i++)
    {
        if(x==a[i])
        printf("The element is present at %d", i);
        break;
    }
    return 0;
}