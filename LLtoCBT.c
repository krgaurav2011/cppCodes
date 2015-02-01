/* Kumar Gaurav Date: Dec 09/12/14
 * C Program For Conversion of Linked list to Complete binary tree 
 * Reference : www.geeksforgeeks.org/given-linked-list-representation-of-complete-tree-convert-it-to-linked-representation/index.html
 */



#include <stdio.h>
#define MAX_SIZE 20	
struct tnode* queue[MAX_SIZE];
int rear=-1,front=-1;

struct lnode // Linked LIst Node Structure
{
	int data;
	struct lnode* next;
};
struct lnode* head = NULL;

struct tnode	// Tree Node Structure
{
	int data;
	struct tnode* left;
	struct tnode* right;
};
struct tnode* root ;
struct tnode* newnode(int x)	// Creation of a new tree node
{
	struct tnode* n = (struct tnode*)malloc(sizeof(struct tnode));
	n->data = x;
	n->left = NULL;
	n->right = NULL;
	return n;
}
void inorder(struct tnode* t)		// Utility function for Tree Traversal
{
	if(t==NULL)
		return;
	inorder(t->left);
	printf("\n%d",t->data);
	inorder(t->right);		
}

// UTILITY FUNCTIONS FOR LIST

void print(struct lnode* x)		// To Print the the contents of The LIST
{
		
		while(x!=NULL)
		{
			printf("%d ",x->data);
			x=x->next;
		}
}
void push(struct lnode* head_ref,int value)		// To push Nodes into The LIST
{
	struct lnode* n = (struct lnode*)malloc(sizeof(struct lnode));
	n->data = value;
	n->next=head_ref;
	head = n;
}

// UTILITY FUNCTIONS FOR QUEUE
struct tnode* dequeue()
{
	if(front==-1)
	{
		printf("Empty");
		return NULL;
	}
	struct tnode* item = queue[front];
	if(front==rear)
	{
		front=-1;
		rear=-1;
	}
	else
		front++;	
	return item;
}
void enqueue(struct tnode* a)
{
	if(rear==MAX_SIZE-1)
	{
		printf("Overflow");
		return;
	}
	if(front==-1 && rear==-1)
		front++;
	queue[++rear]=a;	
}

void LLtoCBT(struct lnode* x) 		//To Convert LL TO Complete BT
{
	
	if(x== NULL)
	{	root = NULL;
		return;
	}
	root = newnode(x->data);
	enqueue(root);
	x=x->next;
	while(x)
	{
		struct tnode* parent=dequeue(),*leftchild= NULL,*rightchild=NULL;
		leftchild=newnode(x->data);
		enqueue(leftchild);
		x=x->next;
		if(x)
		{
			rightchild=newnode(x->data);
			enqueue(rightchild);
			x=x->next;
		}
		parent->left=leftchild;
		parent->right=rightchild;
	}	 
}

int main()
{
	push(head,6);
	push(head,5);
	push(head,4);
	push(head,3);
	push(head,2);
	push(head,1);
	print(head);
	printf("\n");
	LLtoCBT(head);	
	inorder(root);
	return 0;
}
