/*
     Author : Mahedi-Hasan10
     Date : 04-03-2023
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int> a;
    a.insert(5);
    a.insert(7);
    a.insert(7);
    a.insert(4);
    a.insert(4);
    a.insert(3);
    a.insert(9);
    a.insert(1);
    a.insert(1);
    // printing the multiset
    cout << "Printing the multiset : ";
    for (auto i : a)
        cout << i << " ";
    cout << "\n";
    // get size of the multiset
    cout << a.size() << "\n";

    // erasing all occurance of x from the multiset
    a.erase(1);
    cout << "Printing the multiset after erasing all occurance: ";
    for (auto i : a)
        cout << i << " ";
    cout << "\n";

    // Erasing a single element
    a.erase(a.find(4));
    cout << "Printing the multiset after erasing a single occurance: ";
    for (auto i : a)
        cout << i << " ";
    cout << "\n";

    // find element from a multiset
    if (a.find(5) != a.end())
    {
        cout << "5 exists\n";
    }
    else
        cout << "Not exists\n";

    return 0;
}