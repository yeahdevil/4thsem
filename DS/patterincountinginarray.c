#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int i;
    int rem,ques;
    int row,col;
    int num;
    scanf("%d",&num);
    rem=num%4;
    ques=num/4;
    if(num<=5){
        row =0;
        col=num-1;

    }
    else{
    if(rem==0)
    {
       row=ques-1;
       if(row%2==0)
       {
           col=3;
       }
       else{
        col=1;
       }
    }
    if(rem==1)
    {
       row=ques-1;
       if(row%2==0)
       {
           col=4;
       }
       else{
        col=0;
       }

    }
    else
    {
        row=ques;
       if(row%2==0)
       {
           col=rem-1;
       }
       else{
        col=rem-1;
       }
    }
    }
    printf("%d %d",row,col);

}
