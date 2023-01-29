#include<bits/stdc++.h>
using namespace std;

class Array
{
private:
    int *arr;
    int cap;
    int sz;
    void increase_size()
    {
        cap = cap*2;
        int *tmp = new int[cap];
        for(int i = 0; i<sz; i++)
        {
            tmp[i] = arr[i];
        }
        delete arr;
        arr = tmp;

    }
public:
    Array()
    {
        arr = new int[1];
        cap = 1;
        sz = 0;
    }
    void push_back(int x)
    {
        if(cap==sz)
        {
            increase_size();
        }
        arr[sz] = x;
        sz++;

    }

    void print()
    {
        for(int i =0; i<sz; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<"\n";

    }

};
int main()
{
    Array a;
    a.push_back(10);
    a.push_back(20);
    a.push_back(30);
    a.push_back(40);
    a.push_back(50);

    a.print();

    return 0;
}
