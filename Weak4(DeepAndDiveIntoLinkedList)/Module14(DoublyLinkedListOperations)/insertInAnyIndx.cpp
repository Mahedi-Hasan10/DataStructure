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
    //create a new node
    node *create_new_node(int value)
    {
        node *newNode = new node;
        newNode->data = value;
        newNode->next = NULL;
        newNode->prev = NULL;
        return newNode;

    }
    //create a new node and insert it in head
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

    void insert_any_index(int index, int value)
    {
        sz++;
        if(index>sz)
        {
            return;
        }
        if(index==0)
        {
            insert_at_head(value);
        }

        node *a = head;
        int curr_idx = 0;
        while(curr_idx != index-1)
        {
            a = a->next;
            curr_idx++;
        }
        node *newNode = create_new_node(value);
        node *b = a->next;
        newNode->next = b;
        newNode->prev = a;
        a->next = newNode;
        b->prev = newNode;

    }

    //print the linked list
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

    //return the size of the linked list
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

    dl.insert_any_index(2,100);
    dl.traversing();

    cout<<dl.getSize()<<"\n";
    return 0;
}

