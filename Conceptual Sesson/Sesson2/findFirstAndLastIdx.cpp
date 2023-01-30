#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {1,2,3,3,3,5,6,7};
    vector<int> ans(2);
    int first_idx = -1;
    int low = 0, high = nums.size()-1;
    int target = 3;
    while(low <= high)
    {
        int mid = low + (high-low)/2;
        if(nums[mid]==target)
        {
            first_idx = mid;
            high = mid-1;
        }
        else if(target > nums[mid])
        {
            low = mid + 1;
        }
        else if(target < nums[mid])
        {
            high = mid-1;
        }
    }
    ans[0] = first_idx;
    int last_idx =-1;
    low = 0, high = nums.size()-1;
    target = 3;
    while(low <= high)
    {
        int mid = low + (high-low)/2;
        if(nums[mid]==target)
        {
            last_idx =mid;
            low = mid+1;
        }
        else if(target > nums[mid])
        {
            low = mid+1;
        }
        else if(target < nums[mid])
        {
            high = mid-1;
        }
    }
    ans[1] = last_idx;
    cout<<ans[0]<<" "<<ans[1];
    return 0;
}
