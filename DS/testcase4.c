#include <stdio.h>
int main()
{
	int size,i,j,sum=0,rem;
  	scanf("%d",&size);
  	int arr[size];
  	for(i=0;i<size;i++)
    {
      scanf("%d",&arr[i]);
    }
  	for(i=0;i<size;i++)
    {
      sum=0;
      rem=0;
      while(arr[i]!=0)
      {
        rem=arr[i]%10;
        sum=sum+rem;
        arr[i]=arr[i]/10;
      }
      printf("%d\n",sum);
    }
    return 0;
}
