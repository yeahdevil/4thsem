#include<stdio.h>
int main()
{
    int NoOfNumbers;
    scanf("%d",&NoOfNumbers);
    int i;
    for(i=0;i<NoOfNumbers;i++)
    {
        int number,rev =0,temp,number1;

        scanf("%d",&number);
        number1=number;
        while(number>0)
        {
            temp=number%10;
            number=number/10;
            rev=rev+temp;
            rev=rev*10;
            temp=0;
        }
        rev=rev/10;


        if(number1==rev)
       {

           printf("Equal\n");

       }
       else printf("Not Equal\n");

    }
    return 0;
}
