

#include <stdio.h>
 

int main()
{

    // variable declaration

    int n1 = 5, n2 = 10, n3 = 15, n4 = 20, max;

     

    // Largest among n1, n2, n3 and n4

    max = (n1 > n2 && n1 > n3 && n1 > n4) ? n1 : ((n2 > n3 && n2 > n4) ? n2 : (n3 > n4 ? n3 : n4));

 // Print the largest number

    printf("Largest number among %d, %d, %d and %d is %d.", n1, n2, n3, n4, max);
 return 0;


}