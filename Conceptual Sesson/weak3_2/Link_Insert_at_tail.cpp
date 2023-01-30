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
void Insert_at_tail(Node*& head, int value)
{
    Node* newNode = new Node(value);
    if(head == NULL)
    {
        head = newNode;
        return;
    }
    Node* tmp = head;
    while(tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;

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
    Node* head = NULL;
    Insert_at_tail(head,10);
    Insert_at_tail(head,20);
    Insert_at_tail(head,30);
    Insert_at_tail(head,40);
    Insert_at_tail(head,50);
    display(head);

    return 0;
}
