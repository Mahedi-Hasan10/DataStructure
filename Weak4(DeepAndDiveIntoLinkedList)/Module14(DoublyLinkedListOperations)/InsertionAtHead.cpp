#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *prev;
};
class DoublyLinkedList
{
public:
    node *head;
    int sz;
    DoublyLinkedList()
    {
        head = NULL;
        sz = 0;
    }

    node *create_new_node(int value)
    {
        node *newNode = new node;
        newNode->data = value;
        newNode->next = NULL;
        newNode->prev = NULL;
        return newNode;

    }
    void insert_at_head(int value)
    {
        sz++;
        node *newNode = create_new_node(value);
        if(head == NULL)
        {
            head = newNode;
            return;
        }

        node *a = head;
        newNode->next = a;
        a->prev = newNode;
        head = newNode;
    }

    void traversing()
    {
        node *a = head;
        while(a != NULL)
        {
            cout<<a->data<<" ";
            a = a->next;
        }
        cout<<"\n";
    }
    int getSize()
    {
        return sz;
    }

};

int main()
{

    DoublyLinkedList dl;
    dl.insert_at_head(30);
    dl.insert_at_head(20);
    dl.insert_at_head(10);
    dl.insert_at_head(10);
    dl.insert_at_head(10);
    dl.traversing();

    cout<<dl.getSize()<<"\n";
    return 0;
}

