#include<bits/stdc++.h>
using namespace std;

#define pb                   push_back

#define nl                   '\n'


#define optimize()           ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);




typedef struct all
{

    int start;
    int End;
    int act;
    int diff;

}all;


bool cmp(all a ,all b)
{
    return a.diff < b.diff;
}



void solve()
{

    //cout << "Enter the number of activites" << nl;
    int n;
    cin >> n;

    all p;

    int s , E;
    vector<all>v;


    for(int i = 0 ; i < n ; i++)
    {
        cin >> p.start >> p.End;
        p.diff = p.End-p.start;
        p.act = i+1;
        v.pb(p);
    }

    sort(v.begin(),v.end(),cmp);

    vector<int>v1;

    v1.pb(v[0].act);

    for(int i = 0 ; i < v.size() ; i++)
    {
        if(v[i].End <= v[i+1].start)
        {
             v1.pb(v[i+1].act);

        }

    }

    for(int i = 0 ; i < v1.size() ; i++)
    {
        cout << v1[i] << " ";
    }
    cout << nl;

}


int main()
{
    optimize();

    solve();

    return 0;
}
