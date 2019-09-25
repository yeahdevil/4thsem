#include<stdio.h>
int main()
{
    int NoOfSub,count=0;
    scanf("%d",&NoOfSub);
    int i;
    for(i=0;i<NoOfSub;i++)
    {
        int marks;
        scanf("%d",&marks);
        if(marks>=50)
        {
            count++;
        }
        printf("%d",count);
    }
    printf("%d",count);
    return 0;
}
