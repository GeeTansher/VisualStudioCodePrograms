// Merge sort of LL

// class Node {
// public:
// 	int data;
// 	Node* next;
// 	Node* child;

// 	Node(int data) {
// 		this->data = data;
// 		this->next = NULL;
// 		this->child = NULL;
// 	}
// };

Node *mergeLL(Node *a, Node *b)
{
    Node *temp = new Node(0);
    Node *res = temp;

    while (a != NULL && b != NULL)
    {
        if (a->data < b->data)
        {
            temp->child = a;
            temp = temp->child;
            a = a->child;
        }
        else
        {
            temp->child = b;
            temp = temp->child;
            b = b->child;
        }
    }
    if (a != NULL)
        temp->child = a;
    else
        temp->child = b;
    return res->child;
}

Node *flattenLinkedList(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;

    head->next = flattenLinkedList(head->next);
    head = mergeLL(head, head->next);
    return head;
}