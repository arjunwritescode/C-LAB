#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, si, ci;
    printf("Enter the principal amount: \n");
    scanf("%f", &principal);
    printf("Enter the rate of interest: \n");
    scanf("%f", &rate);
    printf("Enter the time duration (in years): \n");
    scanf("%f", &time);

    // Calculating Simple Interest
    si = (principal * rate * time) / 100;
    printf("Simple Interest = %f\n", si);

    // Calculating Compound Interest
    ci = principal * pow(1 + (rate / 100), time) - principal;
    printf("Compound Interest = %f\n", ci);

    return 0;
}



  