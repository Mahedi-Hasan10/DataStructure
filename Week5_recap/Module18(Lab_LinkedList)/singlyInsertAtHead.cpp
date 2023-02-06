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
};
class LinkedList
{
public:
    node *head;
    int sz;
    LinkedList()
    {
        head = NULL;
        sz = 0;
    }

    node *createNewNode(int value)
    {
        node *newNode = new node;
        newNode->data = value;
        newNode->next = NULL;
        return newNode;
    }

    void insertAtHead(int value)
    {
        sz++;
        node *a = createNewNode(value);
        a->next = head;
        head = a;
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
    void getSize()
    {
        cout << sz << "\n";
    }
};
int main()
{
    LinkedList l;
    l.insertAtHead(30);
    l.insertAtHead(20);
    l.insertAtHead(10);
    l.Traversing();
    l.getSize();
    return 0;
}