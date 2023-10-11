#include<stdio.h>
int main()
{
    int n;
 
    printf("Enter the number to be checked for odd or even : \n");
    scanf("%d", &n);
    if (n % 2 == 0) 
    {
        printf("The number is even.\n");
    }
    else 
    {
        printf("The number is odd.\n");
    }
}