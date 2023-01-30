#include<bits/stdc++.h>
using namespace std;
int n;

vector<int> merge_sort(vector<int>a)
{
    if(a.size() <= 1)
    {
        return a;
    }

    vector<int>b;
    vector<int>c;
    int mid = a.size()/2;
    for(int i =0; i<mid; i++)
        b.push_back(a[i]);
    for(int i = mid; i<a.size(); i++)
        c.push_back(a[i]);

    vector<int>sorted_b = merge_sort(b);
    vector<int>sorted_c = merge_sort(c);

    vector<int>sorted_a;
    int idx1 = 0;
    int idx2 = 0;

    for(int i =0; i<a.size(); i++)
    {
        if(idx1 == sorted_b.size())
        {
            sorted_a.push_back(sorted_c[idx2]);
            idx2++;
        }
        else if(idx2 == sorted_c.size())
        {
            sorted_a.push_back(sorted_b[idx1]);
            idx1++;
        }
        else if(sorted_b[idx1] < sorted_c[idx2])
        {
            sorted_a.push_back(sorted_b[idx1]);
            idx1++;
        }
        else
        {
            sorted_a.push_back(sorted_c[idx2]);
            idx2++;
        }
    }
    return sorted_a;
}
int getPairsCount(vector<int>sorted_a, int k)
{
    int count = 0;
    int l, r;


    l = 0;
    r = sorted_a.size() - 1;
    while (l < r) {
        if (sorted_a[l] + sorted_a[r] == k)
           {
            count++;
            l++;
            r--;
           }
        else if (sorted_a[l] + sorted_a[r] < k)
            l++;
        else
            r--;
    }
    return count;
}

int main()
{
int k;
    cin>> n;
    vector<int>a(n);
    for(int i =0; i<n; i++)
        cin>>a[i];

    cin>>k;
    int ans = getPairsCount(merge_sort(a),k);
    cout<<ans;

    return 0;
}

