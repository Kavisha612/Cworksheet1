#include<stdio.h>
int main()
{
    double f;
    printf("Enter the temperature in Farenheit : \n");
    scanf("%lf",&f);
    double c = ((f-32.0)*5.0)/9.0;
    printf("The temperature in celcius is : %lf", c);
    return 0;

}