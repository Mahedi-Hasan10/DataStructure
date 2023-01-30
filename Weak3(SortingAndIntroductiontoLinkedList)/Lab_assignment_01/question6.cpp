#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n,k;
    cin >> n;
    vector <int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> k;
    int low =0, high = n-1;
    while (low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid]==k)
        {
            if (arr[mid-1]==k || arr[mid+1]==k)
                cout << "YES" ;
            else cout << "NO";

            return 0;
        }
        else if (k>arr[mid])
        {
            low = mid+1;
        }
        else
        {
            high = mid-1;
        }
    }
    return 0;
}
