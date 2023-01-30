#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node* next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void Insert_at_tail(node*& head,int val)
{
    node* newNode = new node(val);
    if(head == NULL)
    {
        head = newNode;
        return;
    }
    node* temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;

}
int main()
{
    node* head = NULL;
    Insert_at_tail(head, 10);
    Insert_at_tail(head, 20);
    Insert_at_tail(head, 30);

    cout<<head->data<<" "<<head->next->data<<" "<<head->next->next->data;


    return 0;
}
