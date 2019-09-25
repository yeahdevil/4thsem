#include<stdio.h>
int main()
{

    int i,j;
    int notc;
    int n;
    int count,temp;
    int a[10];
    scanf("%d",&notc);
    while(notc!=0)
    {
        count =0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(j=0;j<n;j++)
        {
            for(i=0;i<n-j;i++)
        {
            if(a[i]>a[i+1])
            {
               temp = a[i];
               a[i]=a[i+1];
               a[i+1]=temp;
               count++;
            }
        }
        }
        printf("%d\n",count);
        notc--;
    }
}
