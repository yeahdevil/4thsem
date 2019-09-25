#include<stdio.h>
int a[10],n,i,item,poss,ch;
int InsertEnd();
int InsertBegning();
int InsertAnywhere();
int main()
{
    printf("Enter the no of elements\n"); //no if elements
    scanf("%d",&n);
    for(i=0;i<n;i++)//initialisation of array
    {
        printf("arr[%d]-->",i);
        scanf("%d",&a[i]);
    }
    printf("***************");
    printf("Array is:-\n");
    for(i=0;i<n;i++)//display array
    {
        printf("\narr[%d]-->%d",i,a[i]);
    }
    do{
    printf("\n*******MENU*******\n");
    printf("---Insertion in array---\n");
    printf("1 For insertion at end\n");
    printf("2 For insertion at beginning\n");
    printf("3 For insertion anywhere\n");
    printf("9 For exit\n");
    printf("Enter your choice:-");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        InsertEnd();
        break;
    case 2:
        InsertBegning();
        break;
    case 3:
        InsertAnywhere();
        break;
    case 9:
        printf("ThankYou For Using My Program");
        break;
    default:
        printf("\nYour entered wrong choice\n");


    }}while(ch!=9);
    return 0;

}
int InsertBegning()
{
    poss=0;
    printf("Enter the value to add:-");
    scanf("%d",&item);
    for(i=n-1;i>=poss;i--)
    {
        a[i+1]=a[i];
    }
    a[poss]=item;
    n=n+1;
    printf("\n***************");
    printf("Changed array is:-\n");
    for(i=0;i<n;i++)//display array
    {
        printf("\narr[%d]-->%d",i,a[i]);
    }
    return 0;
}
int InsertAnywhere()
{
    printf("\nEnter position you want to replace:-");
    scanf("%d",&poss);
    printf("Enter the value to add:-");
    scanf("%d",&item);
    for(i=n-1;i>=poss-1;i--)
    {
        a[i+1]=a[i];
    }
    a[poss]=item;
    n=n+1;
    printf("***************");
    printf("Changed array is:-\n");
    for(i=0;i<n;i++)//display array
    {
         printf("\narr[%d]-->%d",i,a[i]);
    }
    return 0;
}
int InsertEnd()
{
    poss=n;
    printf("Enter the value to add:-");
    scanf("%d",&item);
    a[poss]=item;
    n=n+1;
    printf("***************");
    printf("Changed array is:-\n");
    for(i=0;i<n;i++)//display array
    {
        printf("\narr[%d]-->%d",i,a[i]);
    }
    return 0;
}
