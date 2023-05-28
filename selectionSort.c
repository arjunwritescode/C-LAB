#include <stdio.h>//dont write
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
    {//this will sort in descending
        for (int j = i+1; j < n ; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
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