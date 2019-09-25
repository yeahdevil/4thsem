#include<stdio.h>
int main()
{
    int arr[5],i,temp=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
        if(arr[i]>temp)
        {
            temp=arr[i];
        }
    }
    printf("%d",temp);
}
