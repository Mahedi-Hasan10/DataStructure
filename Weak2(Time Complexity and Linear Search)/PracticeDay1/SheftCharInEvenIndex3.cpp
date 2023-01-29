#include<bits/stdc++.h>
using namespace std;

int main()
{
string str1;
cin>>str1;
for(int i =0 ;i<str1.size();i++)
{
    if(i%2 == 0 )
    {
        if(str1[i]=='z')
            str1[i]=str1[i]-26;

        str1[i] = str1[i]+1;
    }

}
    cout<<str1;
return 0;
}

