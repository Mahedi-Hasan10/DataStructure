/*
     Author : Mahedi-Hasan10
     Date : 08-03-2023
*/
#include <bits/stdc++.h>
using namespace std;
const int maxS = 100;
class Queue
{
public:
    int arr[maxS];
    int l;
    int r;
    int sz;
    Queue()
    {
        l = 0;
        r = -1;
        sz = 0;
    }
    void Enqueue(int value)
    {
        if (r + 1 > maxS)
        {
            cout << "Queue is full\n";
            return;
        }
        r++;
        arr[r] = value;
    }
    void Dequeue()
    {
        if (l > r)
        {
            cout << "Deque is empty\n";
            return;
        }
        l++;
    }

    int Front()
    {
        return arr[l];
    }
};
int main()
{
    Queue qt;
    qt.Enqueue(10);
    qt.Enqueue(20);
    qt.Enqueue(30);
    cout << qt.Front() << "\n";
    qt.Dequeue();
    cout << qt.Front() << "\n";

    return 0;
}