#include<stdio.h>
typedef struct node
{
	struct node *left,*right;
	int data;
}node;
node *create(node *);
node *insert(node *,int);
node *search(node *,int);
void inorder(node *);
void preorder(node *);
void postorder(node *);
void main()
{
	int i,n,x,op;
	node *root;
	
	root=NULL;
	do
	{
		printf("\nEnter option");
		printf("\n1)Create\n2)Insert\n3)Inorder\n4)Preorder\n5)postorder\n6)exit");
		scanf("%d",&op);
		switch(op)
		{
			case 1:root=create(root);break;
			case 2:printf("\nEnter data");
			       scanf("%d",&n);
			       root=insert(root,n);
			       break;
			case 3:inorder(root);break;
			case 4:preorder(root);break;
			case 5:postorder(root);break;
		}
	}while(op!=6);
	getch();
}
node *create(node *t)
{
       int i,x,n;
       t=NULL;
       printf("\nEnter the number of nodes");
       scanf("%d",&n);
       printf("\nEnter data");
       for(i=0;i<n;i++)
       {
	       scanf("%d",&x);
	       t=insert(t,x);
       }
       return t;
}
node *insert(node *t,int x)
{
	if(t==NULL)
	{
		t=(node*)malloc(sizeof(node));
		t->data=x;
		t->right=NULL;
		t->left=NULL;
		return t;
	}
	if(x>t->data)
	{
		t->right=insert(t->right,x);
		return t;
	}
	t->left=insert(t->left,x);
	return t;
}
node *search(node *t,int x)
{
	while(t!=NULL)
	{
		if(x==t->data)
			return t;
		if(x>t->data)
			t=t->right;
		else
			t=t->left;
	}
	return NULL;
}
void inorder(node *t)
{
	if(t!=NULL)
	{
		inorder(t->left);
		printf("%d",t->data);
		inorder(t->right);
	}
}
void preorder(node *t)
{
	if(t!=NULL)
	{
		printf("%d",t->data);
		preorder(t->left);
		preorder(t->right);
	}
}
void postorder(node *t)
{
	if(t!=NULL)
	{
		postorder(t->left);
		postorder(t->right);
		printf("%d",t->data);
	}
}
