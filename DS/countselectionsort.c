#include<stdio.h>
int count;
int getmin(int a[],int start,int len)
{
    int i;
    int small=a[start];
    int min=start;
    for(i=start;i<len;i++)
    {
        if(a[i]<small)
        {
            small=a[i];
            min=i;
            count++;
        }
    }
    return min;
}
int main()
{
   int  notc;
   int
   int a[100];n;
   int i,index;
   int temp;
   scanf("%d",&notc);
   while(notc!=0)
   {
       count=0;
       scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        index=getmin(a,i,n);
        temp=a[i];
        a[i]=a[index];
        a[index]=temp;
    }
    printf("%d",count);
       notc--;
   }
   for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }

}
