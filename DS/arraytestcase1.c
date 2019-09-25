#include<stdio.h>
int main()
{
    int arr[10];
    int i;
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(i=0;i<10;i++)
    {
        sum=sum+arr[i];
    }
    printf("%d",sum);
}
