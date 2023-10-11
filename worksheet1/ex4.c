#include<stdio.h>
int main()
{
    double r;
    printf("Enter the radius of the circle : \n");
    scanf("%lf", &r);
    double a= 3.14*r*r;
    printf("The area of the circle is : %lf\n",a);
}