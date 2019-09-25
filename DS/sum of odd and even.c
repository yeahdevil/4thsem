#include<stdio.h>
int main()
{

    int arr[25];
    int i = 0;
    int sume=0;
    int sumo=0;
    for(i=0;i<25;i++)
    {
        arr[i]=i;
    }
    for(i=0;i<25;i++)
    {
     if(i%2==0)
     {
        sume=sume+arr[i];
     }
     else{
        sumo=sumo+arr[i];
     }
    }
    printf("%d,%d",sume,sumo);

}
