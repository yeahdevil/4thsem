#include<stdio.h>
int maxOf2dArray(int a[5][5])
{
  int i,j;
  int larg=a[0][0];
  for(i=0;i<5;i++)
    for(j=0;j<5;j++)
    {
      if(a[i][j]>larg)
        larg=a[i][j];
    }
  printf("%d",larg);
}
int main(){
int a[5][5];
int i,j;
for(i=0;i<5;i++)
    for(j=0;j<5;j++)
    scanf("%d",&a[i][j]);
    maxOf2dArray(a);
}
