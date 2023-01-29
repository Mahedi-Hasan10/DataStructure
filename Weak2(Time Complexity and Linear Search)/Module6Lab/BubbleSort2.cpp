#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
vector<int> a(n);
for(int i =0;i<n;i++)
    cin>>a[i];


for(int pass = 0;pass<n;pass++)
{
    int last_element = n-1-pass;
    bool sorted = true;
    for(int j = 0;j <= last_element-1;j++)
    {
        if(a[j] > a[j+1])
            swap(a[j],a[j+1]);
            sorted = false;
    }
    if(sorted)
        break;
    cout<<"After Pass "<<pass<<": ";
    for(int i = 0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<"\n";
}

for(int i = 0;i<n;i++)
    cout<<a[i]<<" ";
cout<<"\n";

return 0;
}


/*
Time Complexity : O(n^2) or O(n*(n+1)/2)
Memory Complexity : O(n)
*/
