#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *link;
};

struct node *create_list(struct node *head);
void display(struct node *head);
struct node *insert(struct node *head,int data);
struct node *del(struct node *head,int data);
main()
{
    int choice,data,item,pos;
    struct node *head;
    head=(struct node *)malloc(sizeof(struct node));
    head->info=0;
    head->link=NULL;

    head=create_list(head);

    while(1)
    {

        printf("1.Display\n");
        printf("2.Insert\n");
         printf("3.Delete\n");
         printf("4.Quit\n\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
         case 1:
            display(head);
            break;
         case 2:
            printf("Enter the element to be inserted : ");
            scanf("%d",&data);
            head=insert(head,data);
            break;
        case 3:
            printf("Enter the element to be deleted : ");
            scanf("%d",&data);
            head=del(head,data);
            break;
        case 4:
             exit(1);
         default:
            printf("Wrong choice\n\n");
        }/*End of switch */
    }/*End of while */
}/*End of main()*/
struct node *create_list(struct node *head)
{
    int i,n,data;
    printf("Enter the number of nodes : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Enter the element to be inserted : ");
        scanf("%d",&data);
        head=insert(head,data);
    }
    return head;
}/*End of create_list()*/

void display(struct node *head)
{
    struct node *p;
    if(head->link==NULL)
    {
        printf("List is empty\n");
        return;
    }
    p=head->link;
    printf("List is :\n");
    while(p!=NULL)
    {
        printf("%d ",p->info);
        p=p->link;
    }
    printf("\n");
}/*End of display() */

struct node *insert(struct node *head,int data)
{
    struct node *p,*tmp;
    tmp= (struct node *)malloc(sizeof(struct node));
    tmp->info=data;
    p=head;
    while(p->link!=NULL)
        p=p->link;
    p->link=tmp;
    tmp->link=NULL;
    return head;
}/*End of insert()*/
struct node *del(struct node *head, int data)
{
    struct node *tmp,*p;
    p=head;
    while(p->link!=NULL)
    {
        if(p->link->info==data)
        {
            tmp=p->link;
            p->link=tmp->link;
            free(tmp);
            return head;
        }
        p=p->link;
    }
    printf("Element %d not found\n",data);
    return head;
}/*End of del()*/
