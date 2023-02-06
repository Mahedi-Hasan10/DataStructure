/*
     Author : Mahedi-Hasan10
*/
#include <bits/stdc++.h>
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
    DoublyLinkedList()
    {
        head = NULL;
    }

    node *create_new_node(int value)
    {
        node *newNode = new node;
        newNode->data = value;
        newNode->next = NULL;
        newNode->prev = NULL;
        return newNode;
    }

    void InsertAtHead(int value)
    {
        node *newNode = create_new_node(value);
        if (head == NULL)
        {
            head = newNode;
            return;
        }
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }

    void Traversing()
    {
        node *a = head;
        while (a != NULL)
        {
            cout << a->data << " ";
            a = a->next;
        }
        cout << "\n";
    }
};

int main()
{
    DoublyLinkedList dl;
    dl.InsertAtHead(30);
    dl.InsertAtHead(20);
    dl.InsertAtHead(10);
    dl.InsertAtHead(5);
    dl.Traversing();

    return 0;
}