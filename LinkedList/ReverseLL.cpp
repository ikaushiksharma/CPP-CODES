#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int d) : data(d), next(NULL) {}
};

void push_tail(Node *&head, int val)
{

    Node *n = new Node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL\n";
}

Node *reverse(Node *&head)
{
    Node *previous = NULL;
    Node *current = head;
    Node *next;
    while (current != NULL)
    {
        next = current->next;
        current->next = previous;
        previous = current;
        current = next;
    }

    return previous;
}

Node *reverseKnodes(Node *&head, int k)
{
    Node *previous = NULL;
    Node *current = head;
    Node *nextptr;
    int count = 0;
    while (current != NULL && count < k)
    {
        nextptr = current->next;
        current->next = previous;
        previous = current;
        current = nextptr;
        count++;
    }
    if (nextptr != NULL)
        head->next = reverseKnodes(nextptr, k);
    return previous;
}
int main()
{
    Node *head = NULL;
    push_tail(head, 1);
    push_tail(head, 2);
    push_tail(head, 3);
    push_tail(head, 4);
    push_tail(head, 5);
    push_tail(head, 6);
    display(head);
    // head = reverse(head);
    int k=2;
    Node *newhead = reverseKnodes(head, k);
    display(newhead);
    return 0;
}