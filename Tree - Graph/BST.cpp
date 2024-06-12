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

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int value)
    {
        data = value;
        left = right = nullptr;
    }
};

class BST
{
    Node *root;

    Node *insert(Node *node, int value)
    {
        if (node == nullptr)
        {
            return new Node(value);
        }

        if (value < node->data)
        {
            node->left = insert(node->left, value);
        }
        else
        {
            node->right = insert(node->right, value);
        }

        return node;
    }

    void inOrder(Node *node)
    {
        if (node == nullptr)
        {
            return;
        }
        inOrder(node->left);
        cout << node->data << sp;
        inOrder(node->right);
    }

    // Helper function to search for a value
    Node *search(Node *node, int value)
    {
        if (node == nullptr || node->data == value)
        {
            return node;
        }
        if (value < node->data)
        {
            return search(node->left, value);
        }
        return search(node->right, value);
    }

    Node *kthSmallestUtil(Node *node, int &k)
    {
        if (node == nullptr)
            return nullptr;

        Node *left = kthSmallestUtil(node->left, k);

        if (left != nullptr)
            return left;

        if (--k == 0)
            return node;

        return kthSmallestUtil(node->right, k);
    }

public:
    BST()
    {
        root = nullptr;
    }

    void insert(int value)
    {
        root = insert(root, value);
    }

    void inorderPrint()
    {
        inOrder(root);
        cout << endl;
    }

    // Search for a value in the BST
    bool search(int value)
    {
        Node *result = search(root, value);
        return result != nullptr;
    }

    int kthSmallest(int k)
    {
        Node *res = kthSmallestUtil(root, k);
        return (res == nullptr) ? -1 : res->data;
    }
};

void solve()
{
    //* Sometimes you win, sometimes you learn..." - Good Wisher

    BST tree;

    cout << "Enter the number of elements :" << endl;
    int n;
    cin >> n;

    cout << "Enter the elements :" << endl;
    // 10 8 21 7 27 5 4 3 -1
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        tree.insert(x);
    }

    // Inorder Traversal : Sorted Array
    cout << "Inorder Traversal :" << endl;
    tree.inorderPrint();

    // kth smallest element
    cout << "Enter the kth smallest element to find :" << endl;
    int k;
    cin >> k;

    int kthSmall = tree.kthSmallest(k);
    if (kthSmall == -1)
        cout << "The tree has less than " << k << " elements." << endl;
    else
        cout << "The " << k << "th smallest element is " << kthSmall << endl;

    // Search for a value
    cout << "Enter value to search: ";
    int value;
    cin >> value;
    if (tree.search(value))
    {
        cout << value << " is found in the BST." << endl;
    }
    else
    {
        cout << value << " is not found in the BST." << endl;
    }
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
