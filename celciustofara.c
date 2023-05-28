//wap to find centigrade for a given farenheit temp
#include<stdio.h>
int main(){
    float temp;
     printf("please enter temp in Centigrade: ");
    scanf("%f", &temp);
     float newTemp=(temp*1.8)+32;
     printf("new temp in farenheit is %.2f\n", newTemp);
     return 0;
 }