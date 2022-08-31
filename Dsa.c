#include<stdio.h>
#include<stdlib.h>

typedef struct st
{
    int data;
    struct st* next;
}node;


node*create_node(int value)

{
    node*temp;

    temp=(node*)malloc(sizeof(node));
    temp->data=value;
    temp->next=0;

    return temp;

}

void append(node**head,int value)
{
    node*temp;
    temp=create_node(value);
    node*current=*head;
    if(*head==0)
    {
        *head=temp;
        return;
    }

    while(current->next!=0)
    {
        current=current->next;
    }
    current->next=temp;
}

void traverse(node*head)
{
    while(head->next!=0)
    {
printf("%d",head->data);
printf("\n");
head=head->next;


    }
    printf("%d\n",head->data); 
    }

int main()
{  
append(&head,1);
append(&head,2);
append(&head,3);
append(&head,4);
append(&head,5);
append(&head,6);

printf("original\n");
traverse(head);



}