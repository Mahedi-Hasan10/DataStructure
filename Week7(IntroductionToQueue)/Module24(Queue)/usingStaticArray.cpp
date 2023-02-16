/*
     Author : Mahedi-Hasan10
     Date : 16-02-2023
*/
#include <bits/stdc++.h>
using namespace std;
const int MAX_SIZE = 500;
class Queue
{
public:
    int arr[MAX_SIZE];
    int l, r;
    Queue()
    {
        l = 0;
        r = -1;
    }

    void enqueue(int value)
    {
        if (r + 1 > MAX_SIZE)
        {
            cout << "Queue is full\n";
            return;
        }
        r++;
        arr[r] = value;
    }
    void dequeue()
    {
        if (l > r)
        {
            cout << "Queue is empty\n";
            return;
        }
        l++;
    }
    int size()
    {
        return r - l + 1;
    }
    int front()
    {
        return arr[l];
    }
};
int main()
{
    Queue qt;
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