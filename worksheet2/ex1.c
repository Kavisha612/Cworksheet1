#include<stdio.h>
int main()
{
    int n[5];

    for(int i=0;i<5;i++)
    {   
        printf("Enter the element %d of array : ",i);
        scanf("%d",&n[i]);
    }
    int s=0;
    for(int i=0;i<5;i++)
    {
        s+=n[i];
    }
    printf("Sum : %d",s);
}