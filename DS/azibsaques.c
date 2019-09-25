#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int notc;
  int arr[10][10];
  int n,col;
  scanf("%d",&notc);
  int i,j,row;
  int count=0;
  int vtc,sum;
  char aling;
  while(notc!=0)
  {
    count=1;
    scanf("%d",&n);
    scanf("%d",&col);
    if(n%col==0)
    {
        row=n/col;
    }
    else
    {
        row=(n/col);
        row=row+1;
    }


    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {

             if(count>n)
            {
               arr[i][j]=0;
            }
            else
            {
            arr[i][j]=count;
            count++;
            }
        }
    }
    scanf("%d",&vtc);
    scanf(" %c",&aling);
    switch(aling)
    {
    case 'R':
        sum=0;
        for(i=0;i<col;i++)
        {
         sum=sum+arr[vtc-1][i];
        }
        break;
    case 'C':
        sum=0;
        for(i=0;i<row;i++)
        {
         sum=sum+arr[i][vtc-1];
        }
        break;
    }
    printf("%d\n",sum);

    notc--;
  }
    return 0;
}



