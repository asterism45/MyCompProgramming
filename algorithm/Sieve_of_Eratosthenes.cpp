#include <bits/stdc++.h>
#include <atcoder/all>
using namespace atcoder;
using namespace std;
#define rep(i, n) for(ll i = 0; i < (ll)(n); i++)
#define reps(i, l, r) for (ll i = (l); i < (r); i++)
#define rrep(i,n) for(ll i=n-1;i>=0;i--)
#define rreps(i, l, r) for (ll i = (l-1); i >= (r); i--)
#define INF ((1LL << 62) - (1LL << 31))
#define mp make_pair
#define pb push_back
#define MOD 1000000007 //998244353
#define all(a) (a).begin(), (a).end()
using ll = long long;
using vll = vector<ll>;
using vc = vector<char>;
using vvll = vector<vector<ll>>;
using vvc = vector<vector<char>>;
using pqueue = priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>>;
ll A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y, Z;
ll dy[4] = { 1, -1, 0, 0 }, dx[4] = { 0, 0, 1, -1 };
ll gcd(ll a, ll b) { return (a % b == 0) ? b : gcd(b, a % b); }
void outp(bool flag) { cout << (flag ? "Yes" : "No") << endl; }
bool comp(int a, int b) { return a > b; } //降順

int main()
{
    cin >> N;
    // f[i] == 1 なら素数
    vll f(N + 1, 1);
    // エラトステネスの篩
    for (ll i = 2; i * i <= N; i++)
    {
        if (!f[i])continue;
        for (ll j = i * 2;j <= N;j += i)
            f[j] = 0;
    }

    // 素数出力
    reps(i, 2, N + 1) if (f[i]) cout << i << endl;

    return 0;
}

vll sieveOfEratosthenes(ll N) {
    // f[i] == 1 なら素数
    vll f(N + 1, 1);
    // エラトステネスの篩
    for (ll i = 2; i * i <= N; i++)
    {
        if (!f[i])continue;
        for (ll j = i * 2;j <= N;j += i)
            f[j] = 0;
    }
    return f;
}