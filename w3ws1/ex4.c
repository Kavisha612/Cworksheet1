#include<stdio.h>
int main()
{
    float n;
    printf("Enter temperature : ");
    scanf("%f",&n);

    if(n>=-10 && n<=40)
    printf("Valid.\n");
    else
    printf("Not valid.\n");

}