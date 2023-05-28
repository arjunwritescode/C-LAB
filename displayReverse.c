//of  a number
#include <stdio.h>
 int main()
 {
    int num, rev=0, rem;

printf("Enter a number: ");
scanf("%d", &num);
while(num!=0){
    rem=num%10;
    rev=rev*10+rem;
    num/=10;
}
printf("reverse of the number is: %d", rev);
if(rev==0){
    printf("Cannot reverse numbers with odd number of digits");
}return 0;
 }