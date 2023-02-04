#include <bits/stdc++.h>
using namespace std;
vector<int> coins = {1, 3, 4};
int change_coin(int n)
{
    if (n == 0)
        return 0;
    int ans = 1000000;
    for (int i = 0; i < coins.size(); i++)
    {
        if (n >= coins[i])
        {
            ans = min(ans, 1 + change_coin(n - coins[i]));
        }
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << change_coin(n) << "\n";
    return 0;
}