#include <bits/stdc++.h>
using namespace std;
int sumOFArray(vector<int> a, int n)
{
    int sum = 0;
    if (n <= 0)
    {
        return 0;
    }
    return sumOFArray(a, n - 1) + a[n - 1];
}
int main()
{
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int in;
        cin >> in;
        a.push_back(in);
    }
    cout << sumOFArray(a, n);
    return 0;
}