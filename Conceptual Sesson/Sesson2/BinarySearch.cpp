#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 4,6, 8, 9, 12, 15,18, 22};
    int low = 0, high = v.size()-1;
    int ans =-1;
    int target = 18;
    while(low <= high)
    {
        int mid = low + (high-low)/2;
        if(v[mid]==target)
        {
            ans = mid;
            break;
        }
        if(target > v[mid])
        {
            low = mid+1;
        }
        else if(target < v[mid])
        {
            high = mid-1;
        }

    }
    cout<<v[ans]<<" is loacted at index "<<ans<<"\n";




}
