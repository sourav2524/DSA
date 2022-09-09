#include <stdio.h>
#include <stdlib.h>
typedef struct st
{
    int data;
    struct st* next;
}node;

node* create_node(int value)
{
    node* temp;
    temp = (node*)malloc(sizeof(node));
    temp->data = value;
    temp->next = NULL;
    return temp;
}
void append(node** head,int value)
{
    node* temp;
    temp = create_node(value);
    if(*head == NULL)
    {
       * head = temp;
        return;
    }
    node* current = *head;
    while(current->next != NULL)
    {
        current = current->next;
    }
    current->next = temp;
    
}
void add_node(int pos,int value, node**head)
{
    pos = pos-1;
    node* newnode = create_node(value);
    node* current = *head;
    while(pos--)
    {
        current = current->next;
    }
    node* temp = current->next;
    current->next = newnode;
    newnode->next = temp;
    
}
void delete_node(int pos, node** head)
{
    pos = pos-1;
    node* current =* head;
    while(pos--)
    {
        current = current->next;
    }
    node* temp = current->next->next;
    current->next = temp;
}
void traverse(node* head)
{
    while(head != NULL)
    {
        printf("%d ",head->data);
        head = head->next;
    }
}
int main()
{
    node* head = NULL;
    append(&head, 1);
    append(&head, 2);
    append(&head, 3);
    append(&head, 4);
    traverse(head);
    printf("\n"); 
    add_node(2,5,&head);
    traverse(head);
    printf("\n");
    delete_node(2,&head);
    traverse(head);
    return 0;
}