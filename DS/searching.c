#include<stdio.h>
int main()
{
    int a[7];
    int i;
    int n;
    int count=0;
    for(i=0;i<7;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&n);
    for(i=0;i<7;i++)
    {
        if(a[i]==n)
        {
            count++;
        }
    }
    if(count==0)
    {
        printf("Not Present");
    }
    else
    {
        printf("%d",count);
    }
}
