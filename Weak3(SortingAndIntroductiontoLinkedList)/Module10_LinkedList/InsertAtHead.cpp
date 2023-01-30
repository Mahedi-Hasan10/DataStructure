#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node* next;
    node(int value)
    {
        this->data = value;
        this->next = NULL;
    }
};

class LinkedList
{
public:
    node* head;
    LinkedList(int value)
    {
        head = NULL;
    }
    //This function creates new node and set newnode = value and next =NULL
    node* CreateNewNode(int value)
    {
        node *newNode = new node;
        newNode->data = value;
        newNode->next = NULL;
        return newNode;

    }
    void InsertAtHHead(int value)
    {
        node* a = CreateNewNode(value);
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

    }
    void SearchASingleElement()
    {

    }
    void SearchAllElement()
    {


    }


};
int main()
{
    LinkedList l;
    l.InsertAtHHead(10);
    l.InsertAtHHead(30);
    l.InsertAtHHead(20);
    l.InsertAtHHead(30);



    return 0;
}

