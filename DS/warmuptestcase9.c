#include<stdio.h>
int main()
{
    int number,count=0,j;
    scanf("%d",&number);
    int i=0;
    for(i=2;i<=number;i++)
    {
        for(j=2;j<i/2;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==0)
        {
            printf("%d\n",i);
        }
        count =0;
    }
}
