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

    //Insert first value at head
    node *CreateNewNode(int value)
    {
        node *newNode = new node;
        newNode->data = value;
        newNode->next = NULL;
        return newNode;
    }

    //Insert new value at head
    void InsertAtHead(int value)
    {
        node *a = CreateNewNode(value);
        if(head == NULL)
        {
            head = a;
            return;
        }
        //if head is not null
        a->next = head;
        head = a;
    }

    //Print element in a linkedlist
    void Traversing()
    {
        node *a = head;
        while(a != NULL)
        {
            cout<<a->data<<" ";
            a = a->next;

        }
        cout<<"\n";
    }

    //Search for a single value

    int searchDistinctNumber(int value)
    {
        node *a = head;
        int index = 0;
        while(a != NULL)
        {
            if(a->data == value)
                return index;
            a = a->next;
            index++;
        }
        return -1;
    }

    //search for all possible value
    int searchAllValue(int value)
    {
        node *a = head;
        int index = 0;
        while(a != NULL
    {
        if(a->data == value)
            {
                cout<<value<<" found at index "<<index;
            }
            a = a->next;
            index++;

        }

    }

};
int main()
{

return 0;
}
