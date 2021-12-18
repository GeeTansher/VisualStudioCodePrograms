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
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return ctr;
    else
    {
        ctr = countLeafNodes(root->left) + countLeafNodes(root->right);
        return ctr;
    }
}

int maxroot(tree *root)
{
    int max;
    while (root != NULL && root->right != NULL)
    {
        root = root->right;
    }
    max = root->data;
    return max;
}

int minroot(tree *root)
{
    int min;
    while (root != NULL && root->left != NULL)
    {
        root = root->left;
    }
    min = root->data;
    return min;
}

// tree *insert(tree *root, int num)
// {
//     /* If the tree is empty, return a new node */
//     if (root == NULL)
//     {
//         tree *p;
//         p = (tree *)malloc(sizeof(struct Tree));
//         p->data = num;
//         p->left = NULL;
//         p->right = NULL;
//         return p;
// if any occur in this sp either make a new func for the lines of code in this if or declare p above.
//     }

//     /* Otherwise, recur down the tree */
//     if (num < root->data)
//         root->left = insert(root->left, num);
//     else
//         root->right = insert(root->right, num);

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

tree* minnode(tree *root)
{
    while (root != NULL && root->left != NULL)
    {
        root = root->left;
    }
    return root;
}

void delete (tree **root, int num)
{
    printf("Hi10");
    if (*root = NULL)
    {
        printf("Hi2");
        return;
        
    }
    printf("Hi11");
    if ((*root)->data > num)
        {delete (&(*root)->left, num);printf("Hi3");}
    else if ((*root)->data < num)
        {delete (&(*root)->right, num);printf("Hi4");}
    else
    {
        if ((*root)->left == NULL)
        {
            *root = (*root)->right;
            free((*root)->right);
            printf("Hi5");
        }
        else if ((*root)->right == NULL)
        {
            *root= (*root)->left;
            free((*root)->left);
            printf("Hi6");
        }
        tree *p = minnode((*root)->right);
        (*root)->data = p->data;
        printf("Hi7");
        delete (&(*root)->right, p->data);
    }
    printf("Hi8");
}

// tree* delete (tree *root, int num)
// {
//     if (root = NULL)
//     {
//         return root;
//     }

//     if (root->data > num)
//         root->left = delete (root->left, num);
//     else if (root->data < num)
//         root->right = delete (root->right, num);
//     else
//     {
//         if (root->left == NULL)
//         {
//             tree *p = root->right;
//             free(root);
//             return p;
//         }
//         else if (root->right == NULL)
//         {
//             tree *p = root->left;
//             free(root);
//             return p;
//         }
//         tree *p = minnode(root->right);
//         root->data = p->data;
//         root->right = delete (root->right, p->data);
//     }
//     return root;
// }

int main()
{
    int num;
    tree *root = NULL;
    int ctr, max, min;
    int choice, choice1;
    do
    {
        printf("\nEnter the choice:\n1. Insert\n2. Count nodes\n3. Display\n4. Count leaf nodes\n5. Maximum of tree\n6. Minimum of tree\n7. Delete\n8. Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter the value to be inserted:");
            scanf("%d", &num);
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
            max = maxroot(root);
            printf("\nThe maximum of tree is:%d", max);
            break;
        case 6:
            min = minroot(root);
            printf("The minimum of tree is:%d", min);
            break;
        case 7:
            printf("Enter the value you want to delete:");
            scanf("%d", &num);
            // root = delete (root, num);
            printf("Hi9");
            delete(&root,num);
            printf("Hi1");
            break;
        case 8:
            exit(0);
        default:
            printf("Wrong input...");
            break;
        }

    } while (1);
    return 0;
}