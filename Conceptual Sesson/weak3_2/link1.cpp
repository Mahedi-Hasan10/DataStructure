#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int value;
        Node* next;
        Node(int value)
        {
        this->value = value;
        this->next = NULL;

        }

};
int main()
{
Node *a = new Node(10);
Node *b = new Node(20);
Node *c = new Node(30);
a->next = b;
b->next = c;
cout<<a->value<<" "<<a->next->value<<" "<<a->next->next->value;


return 0;
}
