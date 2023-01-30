#include<bits/stdc++.h>
using namespace std;
int n,k;
int found = 0;

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


bool array_subSet(vector<int> A,vector<int> B, int m,int n)
{

    int i = 0, j = 0;
    while (i < m && j < n )
    {
        if( A[i] < B[j] )
            i++;
        else if( A[i] == B[j] )
        {
            j++;
            i++;
        }
        else if( A[i] > B[j] )
            return -1;
    }
    if (j<n)
        return false;
    else
        return true;
}

int main()
{
    cin>> n;
    vector<int>a(n);
    for(int i =0; i<n; i++)
        cin>>a[i];
    cin>> k;
    vector<int> b(k);
    for(int i =0; i<k; i++)
        cin>>b[i];

    vector<int> sorted_a = merge_sort(a);
    vector<int> sorted_b = merge_sort(b);

    if(array_subSet(sorted_a,sorted_b,n,k))
        cout<<"YES";
    else
        cout<<"NO";


    return 0;
}
