#include <stdio.h>
int main()
{
    int arr[50], i, x, n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the array elements ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n - i; j++)
        {
            if (arr[j] < arr[j - 1])
            {
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }

 printf("The elements of sorted array are");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}