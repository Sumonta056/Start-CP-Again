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

#define endl '\n'
#define sp " "
#define enter cout << endl;

#define si(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define ss(s) scanf("%s", s)
#define pi(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)
#define ps(s) printf("%s\n", s)

#define PI 3.1415926535897932384626
#define mod 1000000007
#define INF numeric_limits<ll>::max();  //! 9223372036854775807
#define NINF numeric_limits<ll>::min(); //! --9223372036854775808
const int N = int(1e5 + 3);

#define max3(a, b, c) max(max((a), (b)), (c))
#define min3(a, b, c) min(min((a), (b)), (c))

//* 5 5 5 6 6 6 7 7
//! lower = lower_bound(v.begin(), v.end(), 6) - v.begin();  ----- Ans : index - 3
//! upper = upper_bound(v.begin(), v.end(), 6) - v.begin();  ----- Ans : index - 6
//* char a = 'A';   int num = (int) a;
//* char a = '2';   int num = a-48;
//* char a = '8';   int num = a - '0' ;  (  s[i]-'0' == 8 )
//! char a1 = 'a' + a - 1;
//?  vector<int> arr(n);
//?  map<int, int> count; count[arr[i]]++;
//?  pair<long, long>;  make_pair(a, b);
//?  sort(arr.begin(), arr.end());

void solve()
{
    //* Sometimes you win, sometimes you learn..." - Good Wisher
    ll n;
    cin >> n;

    vector<ll> arr(n);
    map<ll, ll> count;
    ll value = 0, countHighest = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        count[arr[i]]++;
        if (count[arr[i]] > countHighest)
        {
            countHighest = count[arr[i]];
            value = arr[i];
        }
    }

    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }

    if (n == countHighest || countHighest == 1)
    {
        cout << 1 << endl;
        return;
    }

    sort(arr.begin(), arr.end());

    ll counting = 0;
    for (ll i = 0; i < n; i++)
    {
        if (arr[i] != value)
        {
            if (arr[i] != arr[i + 1])
            {
                counting++;
            }
            if (counting > countHighest)
                break;
        }
    }

    // cout << counting << sp << countHighest << endl;

    if (countHighest < counting)
    {
        cout << countHighest << endl;
        return;
    }

    else
    {
        if (counting + 1 < countHighest)
            cout << counting + 1 << endl;
        else
            cout << counting << endl;
    }

    // cout << value << sp << countHighest;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve(); //* "Sumonta was heree....."
    }
    return 0;
}
