#include<stdio.h>
int main()
{

    int arr[100];
    int i = 0;
    for(i=0;i<100;i++)
    {
        arr[i]=i;
    }

    for(i=0;i<100;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
