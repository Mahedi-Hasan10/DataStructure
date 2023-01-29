#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int ara[n];
for(int i = 0; i<n;i++)
    cin>>ara[i];
int sum = 0;
for(int i=0;i<n;i++)
    sum+=ara[i];
cout<<"Sum is "<<sum<<endl;

int prod = 1;
for(int i = 0;i<n;i++)
    prod*=ara[i];

    cout<<"Product = "<<prod<<endl;

return 0;
}
