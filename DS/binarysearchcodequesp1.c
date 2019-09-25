#include<stdio.h>
int main()
{
    int i;
    int a[100];
    int size,notc;
    int mid,num,index;
    int left,right;
    scanf("%d",&notc);
    while(notc!=0)
        {
    scanf("%d",&size);
    scanf("%d",&num);
    for(i=0;i<size;i++)
        scanf("%d",&a[i]);
        left=0;
        right=size;


    while(left<=right)
    {
        mid=(left + right)/2;
        if(a[mid]==num)
        {
            i=mid;
            while(a[i]==a[i-1])
            {

                i--;
            }
            break;
        }
        if(a[mid]<num)
        {
           left=mid+1;
        }
        else
        {
            right=mid-1;
        }
    }
        printf("%d\n",i);
        notc--;
    }

}
