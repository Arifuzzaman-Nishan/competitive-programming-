/******************************************************************************
                             بسم الله الرحمن الرحيم
                         In the name of ALLAH
                     Author: Arifuzzaman Nishan
                             DIUCSE53
*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vpi;
typedef vector<pll> vpl;
typedef double dl;

#define pb push_back
#define f first
#define s second
#define mp make_pair
#define nl '\n'
#define all(a) (a).begin(), (a).end()
#define sz(x) (int)x.size()
#define mx_int_prime 999999937

const double pi = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007

#define mem(a, b) memset(a, b, sizeof(a))
//#define gcd(a,b)                __gcd(a,b)
//#define sqr(a)                  ((a) * (a))
#define lp(a, b) for (int i = a; i < b; i++)
#define testcase \
    ll t;        \
    cin >> t;    \
    while (t--)
#define reunique(v) v.resize(std::unique(v.begin(), v.end()) - v.begin())

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction(a)               \
    cout.unsetf(ios::floatfield); \
    cout.precision(a);            \
    cout.setf(ios::fixed, ios::floatfield);
#define file()                        \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

typedef vector<int>::iterator vit;
typedef set<int>::iterator sit;

template <typename T>
T sqr(T x) { return x * x; }
template <typename T>
T abs(T x) { return x < 0 ? -x : x; }
template <typename T>
T gcd(T a, T b) { return b ? gcd(b, a % b) : a; }

/********************************Debugger Code start*********************************************************/

template <typename F, typename S>
ostream &operator<<(ostream &os, const pair<F, S> &p)
{
    return os << "(" << p.first << ", " << p.second << ")";
}

template <typename T>
ostream &operator<<(ostream &os, const vector<T> &v)
{
    os << "{";
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        if (it != v.begin())
            os << ", ";
        os << *it;
    }
    return os << "}";
}

template <typename T>
ostream &operator<<(ostream &os, const set<T> &v)
{
    os << "[";
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        if (it != v.begin())
            os << ", ";
        os << *it;
    }
    return os << "]";
}

template <typename T>
ostream &operator<<(ostream &os, const multiset<T> &v)
{
    os << "[";
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        if (it != v.begin())
            os << ", ";
        os << *it;
    }
    return os << "]";
}

template <typename F, typename S>
ostream &operator<<(ostream &os, const map<F, S> &v)
{
    os << "[";
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        if (it != v.begin())
            os << ", ";
        os << it->first << " = " << it->second;
    }
    return os << "]";
}

#define dbg(args...)            \
    do                          \
    {                           \
        cerr << #args << " : "; \
        faltu(args);            \
    } while (0)

void faltu()
{
    cerr << endl;
}

template <typename T>
void faltu(T a[], int n)
{
    for (int i = 0; i < n; ++i)
        cerr << a[i] << ' ';
    cerr << endl;
}

template <typename T, typename... hello>
void faltu(T arg, const hello &...rest)
{
    cerr << arg << ' ';
    faltu(rest...);
}
/***********************************Debugger Code End******************************************************/


int const Max = 1e6 + 125;
bool isprime[Max];
vector<int> v;

void seive_prime(int n)
{

    for (int i = 3; i <= n; i += 2)
    {
        isprime[i] = 1; //initially all odd number set to 1 in array
    }

    int sq = sqrt(n);

    for (int i = 3; i <= sq; i += 2)
    {
        if (isprime[i] == 1)
        {
            for (int j = i * i; j <= n; j += (i + i))
            {
                isprime[j] = 0;
            }
        }
    }

    // v.pb(2);

    for (int i = 3; i <= n; i += 2)
    {
        if (isprime[i] == 1)
            v.pb(i);
    }
}

void solve()
{
    
    seive_prime(1e6);

    int n;
    while (cin >> n && n != 0)
    {
        int a = -1, b = -1;

        int cnt = 0;
        for (auto u : v)
        {
            if (u > n)
                break;

            if (cnt == 0)
            {
                 a = u;
                 b = n - u;
                 if(isprime[b] == 1)
                 {
                     cnt++;
                 }
            }
            if(cnt == 1)break;
        }
        if(a == -1)cout << "Goldbach's conjecture is wrong." <<nl;
        else cout << n <<" " << "=" << " " << a << " " << "+" << " " << b << nl;
    }
}

int main()
{
    optimize();

    solve();

    return 0;
}
