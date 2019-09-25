#include<stdio.h>
struct node {
int data;
struct node *next;
};
int main()
{
    struct node *head=NULL;
    struct node *ptr;
    struct node *ptr1;
    int num;//no of nodes
    scanf("%d",&num);
    while(num)
    {
    if(head)
    {
        ptr=(struct node *)malloc(sizeof(struct node));
        ptr1=head;
        while(ptr1->next!=NULL)
        {

            ptr1=ptr1->next;
        }
        ptr1->next=ptr;

    }
    else
        {
          head = (struct node *)malloc(sizeof(struct node));
          head->next=NULL;
        }
    }
}

