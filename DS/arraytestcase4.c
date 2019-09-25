#include<stdio.h>
int main()
{
    int arr[5],i,temp=0,temp1=-100;
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
        if(temp<arr[i])
        {
            temp=arr[i];
        }
    }
    for(i=0;i<5;i++)
    {
        if(temp1<arr[i]&&arr[i]!=temp)
        {
            temp1=arr[i];
        }
    }
    if(temp1==-100)
    {
        temp1=0;
    }

    printf("%d",temp1);
}
