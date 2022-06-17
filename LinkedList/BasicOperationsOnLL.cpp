#include <iostream>
using namespace std;

//NODE CLASS DECLARATION

class Node
{
public:
    int data;
    Node *next;
    Node(int d) : data(d), next(NULL) {}
};

// Search Recursively

int searchRecursively(Node *head, int key)
{
    // Node *temp = head;
    if (head == NULL)
        return -1;
    if (head->data == key)
        return 0;
    int idx = searchRecursively(head->next, key);
    if (idx == -1)
        return -1;
    return idx + 1;
}

//Push At Front

void push_front(Node *&head, int data)
{
    if (head == NULL)
    {
        Node *n = new Node(data);
        head = n;
        return;
    }
    else
    {
        Node *n = new Node(data);
        n->next = head;
        head = n;
    }
}

//Push Tail

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

//Display

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

//Delete a Node

void deleteAtHead(Node *&head)
{
    Node *todelete = head;
    head = head->next;
    delete todelete;
}
void deletion(Node *&head, int val)
{
    if (head == NULL)
        return;
    if (head->next == NULL)
        deleteAtHead(head);
    Node *temp = head;
    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    Node *todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}

// Search Iteratively

bool search(Node *head, int key)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            cout << "Element Found:)";
            return true;
        }
        temp = temp->next;
    }
    cout << "Element not found:(";
    return false;
}
int main()
{
    Node *head = NULL;
    push_tail(head, 1);
    push_tail(head, 2);
    push_tail(head, 3);
    push_tail(head, 4);
    //display(head);
    // push_front(head, 0);
    display(head);
    cout << searchRecursively(head, 2) << "\n";
    // deletion(head, 3);
    // display(head);
    return 0;
}