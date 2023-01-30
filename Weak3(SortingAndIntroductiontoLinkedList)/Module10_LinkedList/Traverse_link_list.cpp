#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node* next;
};

class LinkedList
{
public:
    node* head;
    LinkedList()
    {
        head = NULL;
    }

    node* create_new_node(int value)
    {
        node* newNode = new node;
        newNode->data = value;
        newNode->next = NULL;
        return newNode;
    }

    void insert_at_head(int value)
    {
        node* a = create_new_node(value);
        if(head == NULL)
        {
            head = a;
            return;
        }
        a->next = head;
        head = a;
    }
    void Traversing()
    {
        node* a = head;
        while(a != NULL)
        {
            cout<<a->data<<" ";
            a = a->next;
        }
        cout<<"\n";

    }

};
int main()
{
    LinkedList l;
    l.insert_at_head(10);
    l.Traversing();
    l.insert_at_head(30);
    l.Traversing();
    l.insert_at_head(20);
    l.Traversing();
    l.insert_at_head(30);
    l.Traversing();

    return 0;
}
