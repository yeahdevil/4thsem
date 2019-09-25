#include<stdio.h>
int func(){
    int number=0;
    int SizeOfNumber;
    scanf("%d",&SizeOfNumber);
    int i;
    for(i=0;i<SizeOfNumber;i++)
    {
        int value;
        scanf("%d",&value);
        number=number*10+value;
    }
    return number;


}
int main()
{
    int res;
    res=func();
    printf("%d",res);
    return 0;

}
