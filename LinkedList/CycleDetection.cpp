#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void push_tail(node *&head, int val)
{

    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL\n";
}

void makeCycle(node *head, int pos)
{
    node *temp = head;
    node *startNode;
    int count = 1;
    while (temp->next != NULL)
    {
        if (count == pos)
            startNode = temp;
        temp = temp->next;
        count++;
    }
    temp->next = startNode;
}

bool check_cycle(node *head)
{
    node *fast = head;
    node *slow = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow)
        {
            return true;
        }
    }
    return false;
}

void removeCycle(node *head)
{
    node *fast = head;
    node *slow = head;
    do
    {
        slow = slow->next;
        fast = fast->next->next;
    } while (slow != fast);
    fast = head;
    while (slow->next != fast->next)
    {
        slow = slow->next;
        fast = fast->next;
    }slow->next=NULL;
}

int main()
{
    node *head = NULL;
    push_tail(head, 1);
    push_tail(head, 2);
    push_tail(head, 3);
    push_tail(head, 5);
    push_tail(head, 6);
    push_tail(head, 7);
    push_tail(head, 8);
    push_tail(head, 9);
    push_tail(head, 0);
    display(head);
    makeCycle(head, 4);
    cout << check_cycle(head) << endl;
    removeCycle(head);
    cout << check_cycle(head) << endl;
    return 0;
}