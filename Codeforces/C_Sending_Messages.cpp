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
#define gc getchar_unlocked
#define ll long long
#define pb push_back
#define F first
#define S second
#define si(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define ss(s) scanf("%s", s)
#define pi(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)
#define ps(s) printf("%s\n", s)
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626

const int mod = 1'000'000'007;
const int N = 3e5, M = N;

void solve()
{
    ll n, f, a, b;
    cin >> n >> f >> a >> b;

    vector<ll> moment(n);
    for (ll i = 0; i < n; i++)
        cin >> moment[i];

    ll lastmoment = 0;
    for (ll i = 0; i < n; i++)
    {
        ll method1 = moment[i] - lastmoment;
        ll method1_battery = (moment[i] - lastmoment) * a;
        ll method2_battery = b;

        lastmoment = moment[i];

        f = f - min(method1_battery, method2_battery);
    }

    if (f <= 0)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
