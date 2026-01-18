/*******************************************************************************
Singly Link list create_node , displayFromBeg ,
reverse_link_list using recursion
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head,*temp,*newnode=NULL;

void create_node()
{
    int value;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the value : ");
    scanf("%d",&value);
    newnode->data= value;
    newnode->next=NULL;
    if(newnode==NULL)
    {
        printf("Memory allocation failed...!\n");
    }
    else
    {
        if(head==NULL)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
    }
}

void displayFromBeg()
{
    temp=head;
    while(temp!=0)
    {
        printf("%d -> ",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}
struct node* reverse_link_list(struct node* head)
{
    if(head==NULL| head->next==NULL)
    return head;
    
    struct node *newHead = reverse_link_list(head->next);

    head->next->next = head;
    head->next = NULL;

    return newHead;
    
}
int main()
{
    int choice;
    
    while(1)
    {
        printf("\n1. Crete a Head Node\n2. Display From Beg\n");

        printf("3. reverse link_list\n4. Exit \n");

        printf("Enter Your Choice \n");

        scanf("%d",&choice);

        switch(choice)

        {

            case 1:

                create_node();
                break;

            case 2:

                displayFromBeg();
                break;

            case 3:

                head=reverse_link_list(head);
                break;
                
            default:
                printf("X-X-X-X-X-X Invalid input X-X-X-X-X-X\n");
                break;
        }
    }
    return 0;
}
