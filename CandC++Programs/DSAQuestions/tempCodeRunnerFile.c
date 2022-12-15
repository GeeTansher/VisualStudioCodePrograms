#include <stdio.h>
#include<stdlib.h>

typedef struct Tree
{
	struct Tree *left;
	struct Tree *right;
	int num;
}tree;

tree *insert(tree *root,int data)
{
	tree *p;
	if(root==NULL)
	{
		p=(tree*)malloc(sizeof(struct Tree));
	        p->num=data;
		p->left=NULL;
		p->right=NULL;
		root=p;
	}
	else
	{
		if(p->num>root->num)
		{
			root->right=insert(root->right,data);
		}
		else
		{
			root->left=insert(root->left,data);
		}
	}
	return root;
}

int bothchildren(tree *root)
{
	if (root == NULL)
    {
        return 0;
    }
    if (root->left != NULL && root->right != NULL)
    {
        return 1 + bothchildren(root->left) + bothchildren(root->right);
    }
    else
    {
        return bothchildren(root->left) + bothchildren(root->right);
    }
}

int main()
{
	tree *root=NULL;
	int n,data;
	scanf("%d",&n);
	while(n>0)
	{
		scanf("%d",&data);
		root=insert(root,data);
		n--;
	}
	printf("%d",bothchildren(root));
	return 0;
}