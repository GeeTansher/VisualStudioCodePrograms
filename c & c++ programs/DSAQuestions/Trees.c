#include <stdio.h>
#include <stdlib.h>

typedef struct Tree
{
    struct Tree *left;
    int data;
    struct Tree *right;
} tree;

void preorder(tree *root)
{
    if (root != NULL)
    {
        printf("%d  ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
    else
        return;
}

void inorder(tree *root)
{
    if (root != NULL)
    {
        preorder(root->left);
        printf("%d  ", root->data);
        preorder(root->right);
    }
    else
        return;
}

void postorder(tree *root)
{
    if (root != NULL)
    {
        preorder(root->left);
        preorder(root->right);
        printf("%d  ", root->data);
    }
    else
        return;
}

// tree* insert(tree *root,int num)
// {
//     tree *p;
//     p=(tree*)malloc(sizeof(struct Tree));
//     p->data=num;
//     if(root==NULL)
//     {
//         root=p;
//         root->left=NULL;
//         root->right=NULL;
//         return root;
//     }
//     else
//     {
//         if(p->data<root->data)
//         {
//             root=insert(root->left,num);
//         }
//         else
//         {
//             root=insert(root->right,num);
//         }
//     }
// }

int countnodes(tree *root)
{
    int ctr = 0;
    if (root == NULL)
        return 0;
    ctr = countnodes(root->left) + countnodes(root->right);
    return ctr + 1;
}

int countLeafNodes(tree *root)
{
    int ctr = 1;
    if (root->left == NULL && root->right == NULL)
        return ctr;
    else
        return countLeafNodes(root->left) + countLeafNodes(root->right);
}

void insert(tree **root, int num)
{
    tree *p;
    p = (tree *)malloc(sizeof(struct Tree));
    p->data = num;
    if (*root == NULL)
    {
        p->left = NULL;
        p->right = NULL;
        *root = p;
    }
    else
    {
        if (p->data > (*root)->data)
        {
            insert(&((*root)->right), num);
        }
        else
        {
            insert(&((*root)->left), num);
        }
    }
}

int main()
{
    int num;
    tree *root = NULL, *temp = NULL;
    int ctr;
    int choice, choice1;
    do
    {
        printf("\nEnter the choice:\n1. Insert\n2. Count nodes\n3. Display\n4. Count leaf nodes\n5. Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter the value to be inserted:");
            scanf("%d", &num);
            // if(root=NULL)
            // {
            //     temp=insert(root,num);
            //     root=temp;
            // }
            // else
            // {
            //     temp=insert(root,num);
            // }
            insert(&root, num);
            break;
        case 2:
            ctr = countnodes(root);
            printf("No of nodes:%d", ctr);
            break;
        case 3:
            printf("\nIn which order you want to print:\n1. PreOrder\n2. InOreder\n3. PostOrder\n");
            scanf("%d", &choice1);
            switch (choice1)
            {
            case 1:
                preorder(root);
                break;
            case 2:
                inorder(root);
                break;
            case 3:
                postorder(root);
                break;
            default:
                printf("Wrong input");
                break;
            }
            break;
        case 4:
            ctr = countLeafNodes(root);
            printf("No of nodes:%d", ctr);
            break;
        case 5:
            exit(0);
        default:
            printf("Wrong input...");
            break;
        }

    } while (1);
    return 0;
}