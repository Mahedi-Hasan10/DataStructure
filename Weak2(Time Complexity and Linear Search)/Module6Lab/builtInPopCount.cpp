#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];

	sort(a.begin(),a.end());

    int ans = 0;
	for(int i=0 ; i<=n ; i++)
		if(a[i]!=a[i-1])
			ans++;
	cout<<ans;
	return 0;
}
We can allocate and then deallocate memory dynamically using the new and delete operators respectively.

If we no longer need to use a variable that we have declared dynamically, we can deallocate the memory occupied by the variable.
For this, the "delete" is used. It returns the memory to the operating system. This is known as memory deallocation.
