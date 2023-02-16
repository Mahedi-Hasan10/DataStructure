/*
     Author : Mahedi-Hasan10
     Date : 16-02-2023
*/
#include <bits/stdc++.h>
using namespace std;
class Queue
{
public:
    int *arr;
    int arr_cap;
    int l, r;
    int sz;
    Queue()
    {
        arr = new int[1];
        arr_cap = 1;
        l = 0;
        r = -1;
        sz = 0;
    }
    void RemoveCircle()
    {
        if (l > r)
        {
            int *tmp;
            tmp = new int[arr_cap];
            int idx = 0;
            for (int i = l; i < arr_cap; i++)
            {
                tmp[idx] = arr[i];
                idx++;
            }
            for (int i = 0; i < r; i++)
            {
                tmp[idx] = arr[i];
                idx++;
            }
            swap(arr, tmp);
            l = 0;
            r = arr_cap - 1;
            delete[] tmp;
        }
    }
    void increase_size()
    {
        RemoveCircle();
        int *tmp = new int[arr_cap * 2];
        for (int i = 0; i < arr_cap; i++)
        {
            tmp[i] = arr[i];
        }

        swap(arr, tmp);
        arr_cap = arr_cap * 2;
        delete[] tmp;
    }
    void enqueue(int value)
    {
        if (sz == arr_cap)
        {
            increase_size();
        }
        r++;
        if (r == arr_cap)
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
        if (l == arr_cap)
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