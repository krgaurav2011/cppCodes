/* Kumar Gaurav Date: Dec 08/12/14
 * Convertion of Sorted Linked list to balanced BST 
 */



#include <stdio.h>

struct lnode
{
	int data;
	struct lnode* next;
};
struct lnode* head = NULL;

struct tnode
{
	int data;
	struct tnode* left;
	struct tnode* right;
};

struct tnode* newnode(int x)
{
	struct tnode* n = (struct tnode*)malloc(sizeof(struct tnode));
	n->data = x;
	n->left = NULL;
	n->right = NULL;
	return n;
}

void push(struct lnode* head_ref,int value)
{
	struct lnode* n = (struct lnode*)malloc(sizeof(struct lnode));
	n->data = value;
	n->next=head_ref;
	head = n;
}
void print(struct lnode* x)
{
		
		while(x!=NULL)
		{
			printf("%d ",x->data);
			x=x->next;
		}
}

int countnode(struct lnode* x)
{
	int count=0;
	while(x!=NULL)
		{
			x=x->next;
			count++;
		}
	return count;	
}

// using the method similar to array increases time complexity .In this case total T = O(nlogn)
/*
struct tnode* linkedtoBSTUtil(struct lnode* x,int low,int high)
{
	if(high<low)
		return NULL;
	int mid=(low+high)/2;
	int i=0;
	struct lnode* temp= x;
	while(temp!=NULL && i<mid)
	{
		temp=temp->next;
		i++;
	}
	struct tnode* root = newnode(temp->data);
	root->left = linkedtoBSTUtil(x,low,mid-1);
	root->right = linkedtoBSTUtil(x,mid+1,high);
	return root;
	
	}
*/
// This method uses recursive calls to implement BST from sorted LL it works in time O(n) much better than previous one .
struct tnode* linkedtoBSTrec(struct lnode** head,int n)
{
	if(n<=0)
		return NULL;
	struct tnode* left = linkedtoBSTrec(head,n/2);
	struct tnode* root = newnode((*head)->data);
	root->left=left;
	(*head)=(*head)->next;
	root->right=linkedtoBSTrec(head,n-n/2-1);
	return root;	
	}
struct tnode* linkedtoBST(struct lnode* head)
{
	int n = countnode(head);
	
	//return linkedtoBSTUtil(head,0,n-1);
	return linkedtoBSTrec(&head,n);
}
void preorder(struct tnode* t)
{
	if(t==NULL)
		return;
	printf("\n%d",t->data);
	preorder(t->left);
	preorder(t->right);		
}

int main()
{
	//struct lnode* head = NULL;
	push(head,6);
	push(head,5);
	push(head,4);
	push(head,3);
	push(head,2);
	push(head,1);
	print(head);
	struct tnode* root = linkedtoBST(head);
	preorder(root);
	return 0;
}
