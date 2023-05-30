#include<stdio.h>
#include<math.h>
int main(){

int a,b;


printf("Enter a and b=");
scanf("%d%d",&a,&b);
printf("Sum of %d and %d= %d",a,b,a+b);


printf("\nDifference of %d and %d= %d",a,b,a-b);
printf("\nProduct of %d and %d= %d",a,b,a*b);
printf("\nDivision of %d and %d= %d",a,b,a/b);
printf("\nRemainder of %d and %d= %d",a,b,a%b);
printf("\nPower of %d and %d= %d",a,b,pow(a,b));



    return 0;
    
}