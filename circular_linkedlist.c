#include<stdio.h>
#include<stdlib.h>

typedef struct Node

{
    int info;
    struct Node *next;
}node;

node *front=NULL,*rear=NULL,*temp;

void create();
void del();
void display();

int main()
{
    int choice;
    printf("\n***********Menu***********\n");
    printf("\nPress 1 to create the element : ");
    printf("\nPress 2 to delete the First element : ");
    printf("\nPress 3 to display the Elements in queue : ");
    printf("\nPress 4 to exit from Program : ");
    do
    {
    printf("\n\nEnter your choice : ");
    scanf("%d",&choice);

        switch(choice)
        {
            case 1:
             create();
            break;

             case 2:
             del();
             break;

             case 3:
             display();
             break;

             case 4:
             return 1;

            default:
                 printf("\nInvalid choice :");
         }
    }while(1);

    return 0;
}

void create()
{
    node *newnode;
    newnode=(node*)malloc(sizeof(node));
    printf("\nEnter the node value : ");
    scanf("%d",&newnode->info);
    newnode->next=NULL;
    if(rear==NULL)
    front=rear=newnode;
    else
    {
        rear->next=newnode;
        rear=newnode;
    }

    rear->next=front;
}

void del()
{
    temp=front;
    if(front==NULL)
        printf("\nUnderflow :");
    else
    {
        if(front==rear)
        {
            printf("\nDeleted element is: %d",front->info);
            front=rear=NULL;
        }
        else
        {
            printf("\nDeleted element is: %d",front->info);
            front=front->next;
            rear->next=front;
        }

    temp->next=NULL;
    free(temp);
    }
}

void display()
{
    temp=front;
    if(front==NULL)
        printf("\nEmpty");
    else
    {
        printf("\n");
        for(;temp!=rear;temp=temp->next)
            printf("\nElement %d address = %u next = %u\t",temp->info,temp,temp->next);
            printf("\nElement %d address = %u next = %u\t",temp->info,temp,temp->next);
    }
}
