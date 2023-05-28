#include <stdio.h>

int main()

{

int i, sum=0;

int n=5;

int a[n];
printf("Enter the elements of the array \n");
for(i=0;i<=n;i++)

{

scanf("%d",&a[i]);

}

for(i=0;i<=n;i++)

{

sum=sum+a[i];

}
printf("sum of the elements of the array \n");


printf("%d",sum);

return 0;

}