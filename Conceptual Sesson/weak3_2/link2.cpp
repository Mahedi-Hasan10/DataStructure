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

void insertAtHead(Node*& head, int value)
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
int main()
{
    Node* head = NULL;

    insertAtHead(head, 11);
    insertAtHead(head, 20);
    cout<<head->value<<" "<<head->next->value;

    return 0;
}

