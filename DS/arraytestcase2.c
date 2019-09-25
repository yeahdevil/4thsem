#include<stdio.h>
int main()
{
    int arra[10],arrb[10];
    int i;
    for(i=0;i<10;i++)
    {
        scanf("%d",&arra[i]);
    }
    for(i=9;i>=0;i--)
    {
        int count =9;
        arrb[count-i]=arra[i];

    }
    for(i=0;i<10;i++)
    {
        printf("%d\n",arrb[i]);
    }

}
