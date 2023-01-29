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
        for(int i =0; i<sz; i++)
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
    void Insert(int pos, int x)
    {
        if(cap==sz)
        {
            increase_size();
        }
        for(int i = sz-1;i>=pos;i--)
        {
            arr[i+1] = arr[i];
        }
        arr[pos] =x;
        sz++;

    }
    void print()
    {
        for(int i = 0; i<sz; i++)
            cout<<arr[i]<<" ";
        cout<<"\n";

    }

    int get_size()
    {
        return sz;
    }
    int get_element(int idx)
    {
        if(idx>=sz)
        {
            cout<<"Error "<<idx<<" is not found\n";
            return -1;
        }
        return arr[idx];
    }

};
int main()
{
    Array rolls;
    rolls.push_back(438820);
    rolls.push_back(438821);
    rolls.Insert(2, 438802);
    rolls.push_back(438822);
    rolls.push_back(438823);
    rolls.push_back(438824);
    rolls.push_back(438825);
    rolls.push_back(438825);
    rolls.push_back(438825);
    rolls.push_back(438825);

    rolls.print();

    cout<<rolls.get_size()<<endl;
    for(int i =0; i<rolls.get_size(); i++)
    {
        cout<<rolls.get_element(i)<<"\n";
    }

    return 0;
}
