#include<stdio.h>
int main()
{
    int n;
    printf("Enter mark : ");
    scanf("%d",&n);
    if(n<=100 && n>=0)
    {
        if(n>=70)
        printf("Student has achieved a distinction.\n");
        else if(n>=40)
        printf("Student has passed.\n");
        else 
        printf("Student has failed.\n");   
    }
    else
    printf("Invald input.\n");



}
