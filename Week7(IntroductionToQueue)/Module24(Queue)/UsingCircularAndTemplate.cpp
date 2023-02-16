/*
     Author : Mahedi-Hasan10
     Date : 16-02-2023
*/
#include <bits/stdc++.h>
using namespace std;
const int MAX_SIZE = 500;
template <class T>
class Queue
{
public:
    T arr[MAX_SIZE];
    T l, r;
    T sz;
    Queue()
    {
        l = 0;
        r = -1;
        sz = 0;
    }

    void enqueue(T value)
    {
        if (sz == MAX_SIZE)
        {
            cout << "Queue is full\n";
            return;
        }
        r++;
        if (r == MAX_SIZE)
        {
            r = 0;
        }
        arr[r] = value;
        sz++;
    }
    void dequeue()
    {
        if (sz == 0)
        {
            cout << "Queue is empty\n";
            return;
        }
        l++;
        if (l == MAX_SIZE)
        {
            l = 0;
        }
        sz--;
    }
    int size()
    {
        return r - l + 1;
    }
    int front()
    {
        if (sz == 0)
        {
            cout << "Queue is empty\n";
            return -1;
        }
        return arr[l];
    }
};
int main()
{
    Queue<int> qt;
    qt.enqueue(5);
    qt.enqueue(7);
    qt.enqueue(9);

    cout << "Size = " << qt.size() << "\n";
    cout << qt.front() << "\n";
    qt.dequeue();
    cout << qt.front() << "\n";
    qt.dequeue();
    cout << qt.front() << "\n";
    qt.dequeue();
    cout << "Size = " << qt.size() << "\n";

    return 0;
}