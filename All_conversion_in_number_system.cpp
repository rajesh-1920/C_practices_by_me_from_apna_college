// Author:  Rajesh Biswas
// CF    :  rajesh19
// Date  :  13.11.2024

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define dbg(x) cout << #x << " = " << x << '\n'
//------------------------------------------------------------------------------------------
ll binary_to_decimal(string bin)
{
    ll dec = 0, p = 1;
    for (ll i = bin.size(); i > 0; i--)
    {
        dec += p * (bin[i - 1] - '0');
        p *= 2;
    }
    return dec;
}
ll octal_to_decimal(string octal)
{
    ll dec = 0, p = 1;
    for (ll i = octal.size(); i > 0; i--)
    {
        dec += p * (octal[i - 1] - '0');
        p *= 8;
    }
    return dec;
}
ll hexca_to_decimal(string hexa)
{
    ll dec = 0, p = 1;
    for (ll i = hexa.size(); i > 0; i--)
    {
        if (hexa[i - 1] >= '0' && hexa[i - 1] <= '9')
            dec += p * (hexa[i - 1] - '0');
        else
            dec += p * (hexa[i - 1] - 'A' + 10);
        p *= 16;
    }
    return dec;
}
//------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------
void solve(void)
{
    string n;
    cin >> n;
    // cout << binary_to_decimal(n) << '\n';
    // cout << octal_to_decimal(n) << '\n';
    // cout << hexca_to_decimal(n) << '\n';
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
