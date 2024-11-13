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
        string t;
        t.push_back(bin[i - 1]);
        dec += p * stol(t);
        p *= 2;
    }
    return dec;
}
ll octal_to_decimal(string octal)
{
    ll dec = 0, p = 1;
    for (ll i = octal.size(); i > 0; i--)
    {
        string t;
        t.push_back(octal[i - 1]);
        dec += p * stol(t);
        p *= 8;
    }
    return dec;
}
ll hexca_to_decimal(string hexa)
{
    ll dec = 0, p = 1;
    for (ll i = hexa.size(); i > 0; i--)
    {
        string t;
        switch (hexa[i - 1])
        {
        case 'A':
            t += "10";
            break;
        case 'B':
            t += "11";
            break;
            break;
        case 'C':
            t += "12";
            break;
        case 'D':
            t += "13";
            break;
        case 'E':
            t += "14";
            break;
        case 'F':
            t += "15";
            break;
        default:
            t.push_back(hexa[i - 1]);
            break;
        }
        dec += p * stol(t);
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
    cout << hexca_to_decimal(n) << '\n';
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
