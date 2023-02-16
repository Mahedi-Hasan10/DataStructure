/*
     Author : Mahedi-Hasan10
     Date : 16-02-2023
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    q.push(15);
    q.push(25);
    q.push(25);
    q.push(35);
    cout << q.empty() << "\n";
    cout << q.size() << "\n";
    cout << q.front() << "\n";
    q.pop();
    cout << q.front() << "\n";
    q.pop();
    cout << q.front() << "\n";
    q.pop();
    cout << q.size() << "\n";
    cout << q.empty() << "\n";
    return 0;
}