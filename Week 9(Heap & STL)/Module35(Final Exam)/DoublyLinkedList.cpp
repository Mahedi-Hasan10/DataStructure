/*
     Author : Mahedi-Hasan10
     Date : 10-03-2023
*/
#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *prv;
};
class dublyLinkedList
{
public:
    node *head;
    node *tail;
    int size;

    dublyLinkedList()
    { // constructor
        head = NULL;
        tail = NULL;
        size = 0;
    }

    node *createNewNode(int value)
    { // Create newNode and retun the node
        node *newNode = new node;
        newNode->data = value;
        newNode->next = NULL;
        newNode->prv = NULL;
        return newNode;
    }

    // insert a value at head .... time complexity O(1)
    void insertHead(int value)
    {
        size++;
        node *newNode = createNewNode(value);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        node *ptr = head;
        newNode->next = ptr;
        ptr->prv = newNode;
        head = newNode;
    }

    // INsert At tail ... time complexity O(1)
    void insertTail(int value)
    {
        size++;
        node *newNode = createNewNode(value);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        newNode->prv = tail;
        tail->next = newNode;
        tail = newNode;
    }
    // Insert At mid ... time complexity O(n)
    void insertMid(int value)
    {
        node *newNode = createNewNode(value);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else if (size == 1)
        {
            newNode->next = tail;
            tail->prv = newNode;
            head = newNode;
        }
        else
        {
            int mid = size / 2;
            node *a = head;
            int curIdx = 0;
            while (curIdx != mid - 1)
            {
                curIdx++;
                a = a->next;
            }
            newNode->next = a->next;
            newNode->prv = a;
            node *b = a->next;
            b->prv = newNode;
            a->next = newNode;
        }

        size++;
    }

    // Traversing LinkedList
    void traversing()
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

    dublyLinkedList dl;
    dl.insertHead(1);
    dl.insertHead(2);
    dl.insertHead(3);
    dl.insertHead(4);
    dl.traversing();
    dl.insertTail(50000000);
    dl.traversing();
    dl.insertTail(56456);
    dl.traversing();
    dl.insertMid(4325);
    dl.traversing();
    return 0;
}
