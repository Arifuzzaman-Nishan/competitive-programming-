#include<bits/stdc++.h>
using namespace std;

#define nl                     '\n'

#define optimize()              ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve()
{

   int arr[] = {1,2,4,10,50,100};
   int n;
   cin >> n;

   int sz = sizeof(arr)/sizeof(arr[0]); 
   int cnt = 0;

   for(int i = sz-1 ; i >= 0 ; i--)
   {
       if(arr[i] <= n)
       {
           cnt += n/arr[i];
           n %= arr[i];
       }
   }

   cout << cnt << nl;

}


int main()
{
    optimize();

    solve();

    return 0;
}
