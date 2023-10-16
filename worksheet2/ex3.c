#include<stdio.h>
int main()
{
    int n[5];

    for(int i=0;i<5;i++)
    {   
        printf("Enter the element %d of array : ",i);
        scanf("%d",&n[i]);
    }
    int max=n[0];
    for(int i=0;i<5;i++)
    {
        if(n[i]>max)
        {
            max=n[i];
        }
    }
    printf("Maximum number is : %d\n",max);
}

