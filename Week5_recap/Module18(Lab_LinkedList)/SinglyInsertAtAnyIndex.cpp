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

        node *newNode = createNewNode(value);
        newNode->next = a->next;
        a->next = newNode;
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

    l.Insert(2, 100);
    l.Traversing();
    l.Insert(3, 13);
    l.Traversing();
    return 0;
}