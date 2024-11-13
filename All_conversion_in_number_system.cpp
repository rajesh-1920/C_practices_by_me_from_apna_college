// Author:  Rajesh Biswas
// CF    :  rajesh19
// Date  :  13.11.2024

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
//------------------------------------------------------------------------------------------
ll binary_to_decimal(ll bin)
{
    ll dec = 0, p = 1;
    while (bin)
    {
        dec += p * (bin % 10);
        p *= 2;
        bin /= 10;
    }
    return dec;
}

void solve(void)
{
    ll n;
    cin >> n;
    cout << binary_to_decimal(n) << '\n';
}
//------------------------------------------------------------------------------------------
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int test = 1, T;
    for (T = 1; T <= test; T++)
        solve();
    return 0;
}
