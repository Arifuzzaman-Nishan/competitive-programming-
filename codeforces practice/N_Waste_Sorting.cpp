/******************************************************************************
                             بسم الله الرحمن الرحيم
                         In the name of ALLAH
                     Author: Arifuzzaman Nishan
                             DIUCSE53
*******************************************************************************/


#include<bits/stdc++.h>
using namespace std;

typedef long long            ll;
typedef vector<ll>          vi;
typedef vector<ll>           vl;
typedef vector<vi>           vvi;
typedef vector<vl>           vvl;
typedef pair<ll,ll>        pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll>         pll;
typedef vector<pii>          vpi;
typedef vector<pll>          vpl;
typedef double               dl;

#define pb                   push_back
#define f                    first
#define s                    second
#define mp                   make_pair
#define nl                   '\n'
#define all(a)               (a).begin(),(a).end()
#define sz(x)                (ll)x.size()
#define mx_ll_prime          999999937

const double pi = acos(-1);
const double eps = 1e-9;
const ll inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007

#define mem(a,b)                memset(a, b, sizeof(a) )
//#define gcd(a,b)                __gcd(a,b)
//#define sqr(a)                  ((a) * (a))
#define lp(a,b)                 for (ll i = a; i < b; i++)
#define testcase                ll t;cin>>t;while(t--)
#define reunique(v)             v.resize(std::unique(v.begin(), v.end()) - v.begin())

#define optimize()              ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a)             cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
#define file()                  freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

typedef vector<ll>::iterator vit;
typedef set<ll>::iterator sit;

template <typename T> T sqr(T x) { return x * x; }
template <typename T> T abs(T x) { return x < 0? -x : x; }
template <typename T> T gcd(T a, T b) { return b? gcd(b, a % b) : a; }



/********************************Debugger Code start*********************************************************/
                             

template < typename F, typename S >
ostream& operator << ( ostream& os, const pair< F, S > & p ) {
            return os << "(" << p.first << ", " << p.second << ")";
}

template < typename T >
ostream &operator << ( ostream & os, const vector< T > &v ) {
            os << "{";
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << *it;
                                            }
                    return os << "}";
}

template < typename T >
ostream &operator << ( ostream & os, const set< T > &v ) {
            os << "[";
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << *it;
                                            }
                    return os << "]";
}

template < typename T >
ostream &operator << ( ostream & os, const multiset< T > &v ) {
            os << "[";
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << *it;
                                            }
                    return os << "]";
}

template < typename F, typename S >
ostream &operator << ( ostream & os, const map< F, S > &v ) {
            os << "[";
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << it -> first << " = " << it -> second ;
                                            }
                    return os << "]";
}

#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)

void faltu () {
            cerr << endl;
}

template <typename T>
void faltu( T a[], ll n ) {
            for(ll i = 0; i < n; ++i) cerr << a[i] << ' ';
                cerr << endl;
}

template <typename T, typename ... hello>
void faltu( T arg, const hello &... rest) {
            cerr << arg << ' ';
                faltu(rest...);
}
/***********************************Debugger Code End******************************************************/
                           







void solve()
{
    testcase
    {
       ll p, q, r;
        cin >> p >> q >> r; // container size

        ll a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;

        if (p >= a && q >= b && r >= c)
        {
            ll diff1 = p - a;
            ll diff2 = q - b;
            ll diff3 = r - c;


            if(diff1 > 0 && d > 0)
            {
                if(diff1 >= d)
                {
                    d = 0;
                }
                else 
                {
                    d -= diff1;
                }
                diff1 = 0;
            }
          

          if(diff2 > 0 && e > 0)
            {
                if(diff2 >= e)
                {
                    e = 0;
                }
                else 
                {
                    e -= diff2;
                }
                diff2 = 0;
            }

           diff3 = diff3 - d - e;  


            if(diff1 < 0 || diff2 < 0 || diff3 < 0)
            cout << "NO" << nl;
            else cout << "YES" << nl;

        }
        else 
        cout << "NO" << nl;
    }
}


int main()
{
    optimize();

    solve();

    return 0;
}




