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
        inorder(root->left);
        printf("%d  ", root->data);
        inorder(root->right);
    }
    else
        return;
}

void postorder(tree *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
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
//     return root;
// }

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

int maxroot(tree *root)
{
    while (root != NULL && root->right != NULL)
    {
        root = root->right;
    }
    return root->data;
}

int minroot(tree *root)
{
    while (root != NULL && root->left != NULL)
    {
        root = root->left;
    }
    return root->data;
}

void searchnode(tree *root, int num)
{
    if (root == NULL)
    {
        printf("Node not found.\n");
        return;
    }
    if (root->data == num)
    {
        printf("Node found and it has no parent as it is the root node");
        return;
    }
    if (root->left != NULL && root->left->data == num || root->right != NULL && root->right->data == num)
    {
        printf("Node found. It's parent is:%d", root->data);
        return;
    }
    if (num < root->data)
    {
        searchnode(root->left, num);
    }
    else
    {
        searchnode(root->right, num);
    }
}

int minnode(tree *root)
{
    while (root && root->left != NULL)
    {
        root = root->left;
    }
    return root->data;
}

// void delete (tree **root, int num)
// {
//     if (*root == NULL)
//     {
//         return;
//     }
//     if ((*root)->data > num)
//         {delete (&(*root)->left, num);}
//     else if ((*root)->data < num)
//         {delete (&(*root)->right, num);}
//     else
//     {
//         if ((*root)->left == NULL)
//         {
//             *root = (*root)->right;
//             free((*root)->right);
//         }
//         else if ((*root)->right == NULL)
//         {
//             *root= (*root)->left;
//             free((*root)->left);
//         }
//         tree *p = minnode((*root)->right);
//         (*root)->data = p->data;
//         delete (&(*root)->right, p->data);
//     }
// }

tree *delete (tree *root, int num)
{
    tree *p = NULL;
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == num)
    {
        if (root->left == NULL)
        {
            p = root->right;
            free(root);
            return p;
        }
        else if (root->right == NULL)
        {
            p = root->left;
            free(root);
            return p;
        }
        else
        {
            root->data = minnode(root->right);
            root->right = delete (root->right, root->data);
        }
    }
    else if (num < root->data)
    {
        root->left = delete (root->left, num);
    }
    else
    {
        root->right = delete (root->right, num);
    }
    return root;
}

int totalnodes(tree *root)
{
    int cnt = 0;
    if (root == NULL)
    {
        return cnt;
    }
    else
    {
        cnt = totalnodes(root->left) + totalnodes(root->right);
        cnt += 1;
        return cnt;
    }
}

int totalleafnodes(tree *root)
{
    if (root == NULL)
    {
        return 0;
    }
    else if (root->left == NULL && root->right == NULL)
    {
        return 1;
    }
    else
    {
        return totalleafnodes(root->left) + totalleafnodes(root->right);
    }
}

int totalnodesleftchild(tree *root)
{
    if (root == NULL)
    {
        return 0;
    }
    if (root->right == NULL && root->left != NULL)
    {
        return 1;
    }
    else
    {
        return totalnodesleftchild(root->left) + totalnodesleftchild(root->right);
    }
}

int totalnodesbothchild(tree *root)
{
    if (root == NULL)
    {
        return 0;
    }
    if (root->left != NULL && root->right != NULL)
    {
        return 1 + totalnodesbothchild(root->left) + totalnodesbothchild(root->right);
    }
    else
    {
        return totalnodesbothchild(root->left) + totalnodesbothchild(root->right);
    }
}

int main()
{
    int num, num1;
    tree *root = NULL, *temp = NULL;
    int choice, choice1;
    do
    {
        printf("\nEnter the choice:\n1. Insert\n2. Display\n3. Count total nodes\n4. Count total leaf nodes\n5. Count nodes with only left child\n6. Count nodes with both child\n7. Maximum of Tree\n8. Minimum of Tree\n9. Delete node\n10. Search node and return parent\n11. Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter the value to be inserted:");
            scanf("%d", &num);
            // root=insert(root,num);
            insert(&root, num);
            printf("Value inserted.\n");
            break;
        case 2:
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
        case 3:
            num1 = totalnodes(root);
            printf("Total nodes in the BST are:%d\n", num1);
            break;
        case 4:
            num1 = totalleafnodes(root);
            printf("Total leaf nodes in the BST are:%d\n", num1);
            break;
        case 5:
            num1 = totalnodesleftchild(root);
            printf("Total nodes with only left child in the BST are:%d\n", num1);
            break;
        case 6:
            num1 = totalnodesbothchild(root);
            printf("Total nodes with both childs in the BST are:%d\n", num1);
            break;
        case 7:
            if (root == NULL)
                printf("Tree empty.");
            else
            {
                num1 = maxroot(root);
                printf("The maximum of the tree is:%d", num1);
            }
            break;
        case 8:
            if (root == NULL)
                printf("Tree empty.");
            else
            {
                num1 = minroot(root);
                printf("The minimum of the tree is:%d", num1);
            }
            break;
        case 9:
            printf("\nEnter the key to be deleted:");
            scanf("%d", &num);
            root = delete (root, num);
            printf("Node deleted.\n");
            break;
        case 10:
            printf("\nEnter the key to be searched:");
            scanf("%d", &num);
            searchnode(root, num);
            break;
        case 11:
            exit(0);
        default:
            printf("Wrong input...");
            break;
        }

    } while (1);
    return 0;
}