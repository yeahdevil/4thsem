#include<stdio.h>
void removeDuplicates(int arr[], int *size)
{
  int i,j;
  j=0;
  for(i=1;i<*size;i++)
  {
        if(arr[j]!=arr[i])
        { j++;
          arr[j]=arr[i];
        }
    }
 *size=j+1;
}

int main()
{
    int arr[]={7, 7, 18, 18, 18, 18, 21, 39, 39, 42, 42, 42};
    int *size;
    int i;
    *size=12;
    removeDuplicates(arr,*size);
    for(i=0;i<*size;i++)
    {
        printf("%d",arr[i]);
    }
}
