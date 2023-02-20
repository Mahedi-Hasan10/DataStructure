/*
     Author : Mahedi-Hasan10
     Date : 20-02-2023
*/
#include <bits/stdc++.h>
using namespace std;

class QUEUE
{
public:
    int *arr;
    int start;
    int end;
    int size;
    int cur_size;
    QUEUE(int size)
    {
        arr = new int[size];
        start = 0;
        end = -1;
        this->size = size;
        cur_size = 0;
    }

    void ENQUEUE(int value)
    {
        if (cur_size == size)
        {
            cout << "Queue is full\n";
            return;
        }
        end++;
        end = end % size;
        arr[end] = value;
        cur_size++;
    }

    void DEQUEUE()
    {
        if (cur_size == 0)
        {
            cout << "Queue is empty!!\n";
            return;
        }
        start++;
        start = start % size;
        cur_size--;
    }
    int GETSIZE()
    {
        return cur_size;
    }

    int FRONT()
    {
        if (cur_size == 0)
        {
            cout << "Queue is empty\n";
            return -1;
        }
        return arr[start];
    }
};
int main()
{
    QUEUE q(5);

    cout << q.GETSIZE() << "\n";
    cout << q.FRONT() << "\n";
    return 0;
}