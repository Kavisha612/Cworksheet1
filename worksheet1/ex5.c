#include<stdio.h>
int main()
{
     double a,b,c;
     printf("Enter the first number : \n");
     scanf("%lf",&a);
     printf("Enter the second number : \n");
     scanf("%lf",&b);
     printf("After swapping : \n");
     c=a;
     a=b;
     b=c;
     printf("The first number : %lf\n",a);
     printf("The second number : %lf\n",b);
     
}