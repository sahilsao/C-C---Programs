#include<stdio.h>
#include<stdlib.h>
/*----Function Prototypes-----*/
void create();
void display();/*-----------------------------*/
struct node
{
        int info;
        struct node *next;
};
struct node *start=NULL;
int main()      //main() starts
{
        int choice;

                printf("\n***SINGLE LINKED LIST OPERATIONS:****\n");
                printf("\n                MENU                             \n");
                printf("---------------------------------------\n");
                printf("\n 1.Create\n");
                printf("\n 2.Display\n");
                printf("\n 3.Exit\n");
                printf("\n--------------------------------------\n");
                while(1){
                printf("Enter your choice: ");
                scanf("%d",&choice);
                switch(choice)
                {
                        case 1:
                                        create();
                                        break;
                        case 2:
                                        display();
                                        break;
                        case 3:
                                        exit(0);
                                        break;
                        default:
                                        printf("\n Wrong Choice:\n");
                                        break;
                }//end of switch()
        }
        return 0;
}//end of main()
void create()
{
        struct node *temp,*ptr;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("\nOut of Memory Space:\n");
                exit(0);
        }
        printf("\nEnter the data value for the node: ");
        scanf("%d",&temp->info);
        temp->next=NULL;
        if(start==NULL)
        {
                start=temp;
        }
        else
        {
                ptr=start;
                while(ptr->next!=NULL)
                {
                        ptr=ptr->next;
                }
                ptr->next=temp;
        }
}//end of create()
void display()
{
        struct node *ptr;
        if(start==NULL)
        {
                printf("\nList is empty:\n");
                return;
        }
        else
        {
                ptr=start;
                printf("\nThe List elements are:\n");
                while(ptr!=NULL)
                {
                        printf("%d--->",ptr->info );
                        ptr=ptr->next ;
                }//end of while
                printf("NULL\n");
        }//end of else
}//end of display()
