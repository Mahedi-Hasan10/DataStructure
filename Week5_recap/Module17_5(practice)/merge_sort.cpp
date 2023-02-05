#include <bits/stdc++.h>
using namespace std;
vector<int> merge_sort(vector<int> a)
{
    if (a.size() <= 1)
    {
        return a;
    }

    int mid = a.size() / 2;
    vector<int> left;
    vector<int> right;

    for (int i = 0; i < mid; i++)
    {
        left.push_back(a[i]);
    }
    for (int i = mid; i < a.size(); i++)
    {
        right.push_back(a[i]);
    }

    vector<int> sorted_left = merge_sort(left);
    vector<int> sorted_right = merge_sort(right);
    vector<int> sorted_a;
    int p1 = 0;
    int p2 = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (p1 == sorted_left.size())
        {
            sorted_a.push_back(sorted_right[p2]);
            p2++;
        }
        else if (p2 == sorted_right.size())
        {
            sorted_a.push_back(sorted_left[p1]);
            p1++;
        }
        else if (sorted_left[p1] < sorted_right[p2])
        {
            sorted_a.push_back(sorted_left[p1]);
            p1++;
        }
        else
        {
            sorted_a.push_back(sorted_right[p2]);
            p2++;
        }
    }

    return sorted_a;
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
    vector<int> ans = merge_sort(a);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}