#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node* next;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

void insert_at_head(Node*& head, int value)
{
    Node* newNode = new Node(value);
    if(head == NULL)
    {
        head = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;

}

void display(Node* head)
{
    if(head == NULL) return;
    while(head != NULL)
    {
        cout<<head->value<<" ";
        head = head->next;

    }
}
int main()
{
    /*
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);

    a->next = b;
    b->next = c;
    cout<<a->value<<" "<<a->next->value<<" "<<a->next->next->value;
    return 0;
    */

    Node* head = NULL;
    insert_at_head(head, 10);
    insert_at_head(head, 20);
    insert_at_head(head, 30);

    display(head);

}
