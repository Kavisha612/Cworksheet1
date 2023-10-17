#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number to be checked : ");
    scanf("%d",&n);

    if(n>0)
        printf("Number is positive.\n");
    else if(n==0)
        printf("Number is Zero.\n");
    else
        printf("Number is negative.\n");
}