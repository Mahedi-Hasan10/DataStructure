#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;
vector<int> arr(n);
int multipy = 1;
for(int i = 0;i<n;i++)
    cin>>arr[i];

for(int i =0;i<n;i++)
{
    if(i%2==1)
        multipy*=arr[i];
}
cout<<multipy<<"\n";
return 0;
}
