#include<bits/stdc++.h>
using namespace std;
/*
Time complexity -> O(n^2/2) -> O(n^2)
Space Complexity ->O(n)

*/
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i = 0; i<n; i++)
    {
        cin>>a[i];
    }

    for(int i =0; i<n; i++)
    {
        string ans = "NO\n";
        for(int j = i+1; j<n; j++)
        {
            if(i==j)
                continue;

            if(a[i]==a[j])
            {
                ans = "YES\n";
            }

        }
        cout<<"i = "<<i<<" "<<ans;

    }

    return 0;
}

/*
n
4
2 4 3 2
a[0] ->YES
a[1] ->NO
a[2] ->NO
a[3] ->No
*/

