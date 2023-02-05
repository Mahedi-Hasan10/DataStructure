#include <bits/stdc++.h>
using namespace std;
int fibonacchi(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return fibonacchi(n - 1) + fibonacchi(n - 2);
}
int main()
{
    int n;
    cin >> n;
    cout << fibonacchi(n) << "\n";

    return 0;
}