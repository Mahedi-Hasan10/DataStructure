#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    int summ = 0;
    for(int i =0; i<n; i++)
        cin>>a[i];
    for(int i=0; i<n; i++)
    {
        summ+=a[i];
    }
    cout<<summ<<"\n";
    return 0;
}
/*
WAP that takes n integer numbers, and sum up all the integers in that array.

Sample input
                  Sample output
5
1  2  3  4  5         15

6
5 6 7 8 0 1           27




*/
