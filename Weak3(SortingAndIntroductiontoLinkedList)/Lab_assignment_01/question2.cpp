#include <bits/stdc++.h>
using namespace std;

int get_missing_number(vector<int> v, int n)
{
    int sumOfVector = 0;
    for(int i = 0; i<n; i++)
        sumOfVector+=v[i];

    int ExpectedSum = (n*(n+1))/2;
    int missing = ExpectedSum - sumOfVector;
    return missing;

}
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0;i<n-1;i++)
    cin>>v[i];

    int missing = get_missing_number(v,n);
    cout<<missing;

    return 0;
}
