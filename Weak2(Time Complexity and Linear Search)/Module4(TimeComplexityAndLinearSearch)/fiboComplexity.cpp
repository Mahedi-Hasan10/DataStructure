#include<bits/stdc++.h>
using namespace std;
/*
Time complexity ->
Space Complexity ->

*/
int called = 0;
int save[100];
int fibo(int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    if(save[n]!=0)
        return save[n];
    int x = fibo(n-1);
    called++;
    int y = fibo(n-2);
    called++;
    save[n]=x+y;
    return x+y;

}
int main()
{
    int n;
    cin>>n;
    cout<<"Fibo "<<fibo(n)<<" Called = "<<called<<endl;
    return 0;
}



