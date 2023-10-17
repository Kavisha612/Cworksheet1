#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number to be checked : ");
    scanf("%d",&n);

    if(n%4==0 && n%5==0)
    printf("%d is divisible by 4 and 5\n",n);
    else
    printf("%d is not divisible by both 4 and 5.\n",n);
return 0;
}