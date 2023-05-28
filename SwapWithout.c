 #include <stdio.h>
 int swap(int,int);
 void main()
 { int a,b;
    printf("Enter the values of a and b ");
    scanf("%d%d",&a, &b);
    swap(a,b);

 }
  int swap(int a, int b){
   
     int sum=a+b;
     a= sum-a; b=sum-b;
     printf("\nAfter swap a=%d b=%d",a,b);
     return 0;
  }