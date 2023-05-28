#include <stdio.h>

int main() {
    int num1, num2, lcm, max;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    // find the maximum number
    max = (num1 > num2) ? num1 : num2;

    // loop until LCM is found
    while(1) {
        if(max % num1 == 0 && max % num2 == 0) 
        {
            lcm = max;
            break;
        }
        ++max;
    }

    printf("The LCM of %d and %d is %d.", num1, num2, lcm);

    return 0;
}
