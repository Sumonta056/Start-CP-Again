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
#define si(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define ss(s) scanf("%s", s)
#define pi(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)
#define ps(s) printf("%s\n", s)
#define PI 3.1415926535897932384626

/*
ll n; cin >> n;
vector<int> arr(n);
map<int, int> count;
for (int i = 0; i < n; i++){
    cin >> arr[i];
    count[arr[i]]++;
}
*/

void solve()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);
    map<ll, ll> count;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        count[arr[i]]++;
    }

    sort(arr.begin(), arr.end());
    ll total = 0;
    for (auto it : count)
    {
        ll k = it.second;
        total += k * (k - 1) * (k - 2) / 6;
        ll index = lower_bound(arr.begin(), arr.end(), it.first) - arr.begin();
        total += (k * (k - 1) / 2) * index;
    }

    cout << total << endl;
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
