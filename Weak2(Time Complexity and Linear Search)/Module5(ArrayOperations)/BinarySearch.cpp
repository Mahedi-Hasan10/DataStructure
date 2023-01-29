#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i =0; i<n; i++)
        cin>>a[i];
    int flag = 0;
    int left = 0, right = n-1;
    while(left<=right)
    {
        int mid = (left+right)/2;
        cout<<"Left pivot = "<<left<<" Right Pivot = "<<right<<" Mid = "<<mid<<"\n";
        if(a[mid]==k)
        {
            cout<<"YES "<<mid<<endl;
            flag = 1;
            break;
        }
        if(a[mid]<k)
            left = mid+1;
        if(a[mid]>k)
            right= mid-1;
    }
    if(flag == 1)
        cout<<"YES\n";
    else
        cout<<"NO\n";

    return 0;
}
