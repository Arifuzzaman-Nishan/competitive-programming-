#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
#define testcase \
    ll t;        \
    cin >> t;    \
    while (t--)
 
#define nl '\n'
 
void solve()
{
    testcase
    {
        ll n;
        cin >> n;
        int f = 0;
        for (ll i = 0; i <= 1000; i++)
        {
            ll other = n - (2020 * i);
            if (other < 0)
                break;
            if (other % 2021 == 0)
            {
               f = 1;
               break;
            }
        }
         f == 1? cout << "YES" << nl : cout << "NO" << nl;
    }
}
int main()
{
    // ios::sync_with_stdio(0);
    // cin.tie(0);
    // cout.tie(0);
    // cout<<fixed;
    // cout<<setprecision(10);
    //        freopen("timber_input.txt", "r", stdin);
    //        freopen("timber_output.txt", "w", stdout);
 
    //            cout<<"Case #"<<i<<": ";
    solve();
 
    return 0;
}