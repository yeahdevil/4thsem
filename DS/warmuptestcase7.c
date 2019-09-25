#include<stdio.h>
int main()
{
    int NoOfInput,number;
     int sum=0;
    scanf("%d",&NoOfInput);
    int i;
    for(i=0;i<NoOfInput;i++)
    {

        scanf("%d",&number);
        sum=sum+number;
    }
    printf("%d",sum);
}
