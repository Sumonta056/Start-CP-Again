//        ** Sumonta Saha Mridul **                                    SWE - SUST
/*

 *        ######    ##     ##  ##     ##   #######   ##    ##   ########      ###
 !       ##    ##   ##     ##  ###   ###  ##     ##  ###   ##      ##        ## ##
 ?       ##         ##     ##  #### ####  ##     ##  ####  ##      ##       ##   ##
 *        ######    ##     ##  ## ### ##  ##     ##  ## ## ##      ##      ##     ##
 !             ##   ##     ##  ##     ##  ##     ##  ##  ####      ##      #########
 ?       ##    ##   ##     ##  ##     ##  ##     ##  ##   ###      ##      ##     ##
 *        ######     #######   ##     ##   #######   ##    ##      ##      ##     ##

*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

#define f first
#define se second
#define lb lower_bound
#define ub upper_bound
#define pb push_back

#define pii pair<int, int>
#define pll pair<long, long>
#define mp(a, b) make_pair(a, b)
#define vi vector<int>
#define vll vector<ll>
#define vii vector<pii>
#define sll set<ll>
#define qll queue<ll>
#define stll stack<ll>
#define Mi map<int, int>
#define mii map<pii, int>
#define alls(a) (a).begin(), (a).end()
#define sz(x) (int)x.size()

#define Size(s) s.length()
#define all(v) (v.begin, v.end)
#define rev(v) reverse(v.begin, v.end)
#define srt(v) sort(v.begin, v.end)

#define F(i, s, e) for (ll i = s; i < e; ++i)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rem(i, a, b) for (int i = a; i > b; i--)
#define pv(v)             \
    for (ll i : v)        \
        cout << i << " "; \
    cout << endl;

#define max3(a, b, c) max(max((a), (b)), (c))
#define min3(a, b, c) min(min((a), (b)), (c))

#define endl '\n'
#define Y cout << "YES\n"
#define No cout << "NO\n"
#define ye cout << "Yes\n"
#define no cout << "No\n"

#define sp " "
#define enter cout << endl;

#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

#define mod 1000000007
#define inf 1000000000000000005
#define INF numeric_limits<ll>::max();
#define NINF numeric_limits<ll>::min();
const int N = int(1e5 + 3);

//* char a = 'A';   int num = (int) a;
//* char a = '2';   int num = a-48;
//* char a = '8';   int num = a - '0' ;  (  s[i]-'0' == 8 )

ll mod_mul(ll a, ll b)
{
    a = a % mod;
    b = b % mod;
    return (((a * b) % mod) + mod) % mod;
}
ll mod_add(ll a, ll b)
{
    a = a % mod;
    b = b % mod;
    return (((a + b) % mod) + mod) % mod;
}

int main()
{
    fast;

    ll t;
    cin >> t;

    while (t--)
    {
        ll X1 = INT_MAX;
        ll X2 = INT_MIN;

        for (int i = 0; i < 4; i++)
        {
            ll x, y;
            cin >> x >> y;

            X1 = min(x, X1);
            X2 = max(x, X2);
        }

        ll ans = X2 - X1;

        cout << ans * ans << endl;
    }
}
