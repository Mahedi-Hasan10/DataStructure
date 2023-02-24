/*
     Author : Mahedi-Hasan10
     Date : 24-02-2023
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int t;
    cin >> t;
    while (t--)
    {
        int type, k;
        cin >> type >> k;
        if (type == 1)
        {
            auto it = lower_bound(v.begin(), v.end(), k);
            if (it != v.end())
            {
                int index = it - v.end(), value = *it;
                cout << index << " -> " << value << "\n";
            }
            else
            {
                cout << -1 << "\n";
            }
        }
        else
        {
            auto it = upper_bound(v.begin(), v.end(), k);
            if (it != v.end())
            {
                int index = it - v.end(), value = *it;
                cout << index << " -> " << value << "\n";
            }
        }
    }

    return 0;
}