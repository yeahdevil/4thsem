#include<stdio.h>
int main()
{
    int i;
    int a[100];
    int size;
    int mid,num,index;
    int left,right;
    scanf("%d",&size);
    for(i=0;i<size;i++)
        scanf("%d",&a[i]);
        left=0;
        right=size;
        scanf("%d",&num);

    while(left<=right)
    {
        mid=(left + right)/2;
        if(a[mid]==num)
        {
            index=mid;
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
    printf("%d",index);

}
