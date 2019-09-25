#include<stdio.h>
int a[10],n,i,item,poss,ch;
int DeleteEnd();
int DeleteBegning();
int DeleteAnywhere();

int main()
{
    printf("Enter the no of elements\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("arr[%d]-->",i);
        scanf("%d",&a[i]);
    }
    printf("***************");
    printf("Array is:-\n");
    for(i=0;i<n;i++)
    {
        printf("\narr[%d]-->%d",i,a[i]);
    }
    do{
    printf("\n*******MENU*******\n");
    printf("---Deletion in array---\n");
    printf("1 For Deletion at end\n");
    printf("2 For Deletion at beginning\n");
    printf("3 For Deletion anywhere\n");
    printf("9 For exit\n");
    printf("Enter your choice:-");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        DeleteEnd();
        break;
    case 2:
        DeleteBegning();
        break;
    case 3:
        DeleteAnywhere();
        break;
    case 9:
        printf("ThankYou For Using My Program");
        break;
    default:
        printf("\nYour entered wrong choice\n");


    }}while(ch!=9);
    return 0;

}
int DeleteBegning()
{
    for(i=0;i<n;i++)
    {
        a[i]=a[i+1];
    }
    n=n-1;
    printf("\nArray after deletion");
     for(i=0;i<n;i++)
    {
        printf("\narr[%d]-->%d",i,a[i]);
    }
    return 0;
}
int DeleteEnd()
{
    n=n-1;
    printf("\nArray after deletion");
     for(i=0;i<n;i++)
    {
        printf("\narr[%d]-->%d",i,a[i]);
    }
    return 0;
}
int DeleteAnywhere()
{
    printf("\nEnter position you want to delete:-");
    scanf("%d",&poss);
    for(i=poss-1;i<n;i++)
    {
        a[i]=a[i+1];
    }
    n=n-1;
    printf("\nArray after deletion");
     for(i=0;i<n;i++)
    {
        printf("\narr[%d]-->%d",i,a[i]);printf("\nArray after deletion");
     for(i=0;i<n;i++)//display array
    {
        printf("\narr[%d]-->%d",i,a[i]);
    }
    }
    return 0;
}
