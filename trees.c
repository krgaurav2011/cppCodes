#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node* next;
};
struct node *newnode(int data)
{
	struct node* temp = (struct node*) malloc(sizeof(struct node));
	
	temp->data = data;
	temp->next = NULL;
	return temp;
}
void sorted_insert(struct node** head_ref,struct node* new)
{
	struct node* current;
	if(*head_ref==NULL || (*head_ref)->data >= new->data)
	{
		new->next= *head_ref;
		*head_ref = new;
		
		}
	else
	{
		current = *head_ref;
		while(current->next != NULL && current->next->data < new->data)
		{
			current= current->next;
			}
		}	
		new->next= current->next;
		current->next = new;
	
}
void printList(struct node *head)
{
    struct node *tempp = head;
    while(tempp != NULL)
    {
        printf("%d  ", tempp->data);
        tempp = tempp->next;
    }
}
int main()
{
	struct node *head =NULL;
	//head->link=NULL;
	struct node *new_node = newnode(5);
	sorted_insert(&head,new_node);
	new_node = newnode(10);
    sorted_insert(&head,new_node);
    new_node = newnode(7);
  sorted_insert(&head,new_node);
    new_node = newnode(3);
    sorted_insert(&head,new_node);
    new_node = newnode(1);
    sorted_insert(&head,new_node);
    new_node =newnode(9);
    sorted_insert(&head,new_node);
    printf("\n Created Linked List\n");
    printList(head);
 
    getchar();
    return 0;
	
	
}
