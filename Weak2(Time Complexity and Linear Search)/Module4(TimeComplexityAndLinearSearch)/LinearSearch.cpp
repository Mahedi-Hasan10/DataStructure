#include<bits/stdc++.h>
using namespace std;
/*
Time complexity -> O(n)
Space Complexity ->O(n)

*/

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0; i<n; i++)
        cin>>a[i];

    for(int i=0; i<n; i++)
    {
        if(a[i]==k)
        {
            cout<<"YES\n";
            break;
        }
    }

    for(int i=0; i<n; i++)
    {
        if(a[i]==k)
        {
            cout<<i<<"\n";
            break;
        }
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]==k)
        {
            cout<<i<<" ";

        }
    }
    return 0;
}




