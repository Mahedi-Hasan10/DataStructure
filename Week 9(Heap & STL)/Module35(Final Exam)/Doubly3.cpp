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

    // Insert At tail ... time complexity O(1)
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
    // INsert At mid ... time complexity O(n)
    void insertMid(long long value)
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

    // Traversing and print LinkedList O(n)
    void print()
    {
        node *ptr = head;
        while (ptr != NULL)
        {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
        cout << "\n";
    }
    // Marge LinkedList O(1)
    void merge(dublyLinkedList a)
    {
        if (head == NULL)
        {
            head = a.head;
            tail = a.tail;
        }
        else
        {
            tail->next = a.head;
            a.head->prv = tail;
            tail = a.tail;
        }
        size += a.size;
    }
    // Size of linkedList
    int getSize()
    {
        return size;
    }
};

int main()
{

    dublyLinkedList a;
    dublyLinkedList b;

    a.insertHead(1);
    a.insertTail(5);
    a.insertMid(3);
    a.insertHead(0);
    a.insertTail(10);
    a.print(); // prints  0 1 3 5 10

    b.insertHead(10);
    b.insertTail(50);
    b.insertMid(30);
    b.insertHead(9);
    b.insertTail(100);
    b.print(); // prints  9 10 30 50 100

    a.merge(b);
    a.print(); // prints  0 1 3 5 10 9 10 30 50 100
    b.print(); // prints  9 10 30 50 100

    return 0;
}
