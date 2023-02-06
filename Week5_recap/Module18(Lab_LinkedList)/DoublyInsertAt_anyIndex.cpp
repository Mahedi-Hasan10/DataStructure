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
    void Insert(int index, int value)
    {
        node *a = head;
        int cur_idex = 0;
        while (cur_idex != index - 1)
        {
            if (a == NULL)
            {
                break;
            }
            a = a->next;
            cur_idex++;
        }
        if (a == NULL)
        {
            cout << "Error !\n";
        }
        node *newNode = create_new_node(value);
        newNode->next = a->next;
        node *b = a->next;
        if (b != NULL)
        {
            b->prev = newNode;
        }
        a->next = newNode;
        newNode->prev = a;
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

    dl.Insert(2, 50);
    dl.Traversing();
    dl.Insert(4, 200);
    dl.Traversing();

    return 0;
}