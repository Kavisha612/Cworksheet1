#include<stdio.h>
int main()
{
    int n[5];

    for(int i=0;i<5;i++)
    {   
        printf("Enter the element %d of array : ",i);
        scanf("%d",&n[i]);
    }



    for(int i=0;i<5;i++)
    {   
        int c=n[0];
        n[0]=n[4];
        n[4]=c;
    }
    for(int i=0;i<5;i++)
    {
        printf("%d \n",n[i]);
    }}