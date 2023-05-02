#include <bits/stdc++.h>

#include <atcoder/all>
using namespace atcoder;
using namespace std;
#define rep(i, l, r) for (ll i = (l); i < (r); i++)
#define INF ((1LL << 62) - (1LL << 31))
#define pb push_back
#define mp make_pair
#define MOD 1000000007
#define all(a) (a).begin(), (a).end()
using ll = long long;
using vll = vector<ll>;
using vc = vector<char>;
using vvll = vector<vector<ll>>;
using vvc = vector<vector<char>>;
using pqueue = priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>>;
ll A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y, Z;
ll dy[4] = {1, -1, 0, 0}, dx[4] = {0, 0, 1, -1};
ll gcd(ll a, ll b) {
  if (a % b == 0) {
    return b;
  } else {
    return gcd(b, a % b);
  }
}

int main() {
  cin >> H >> W >> N;
  vvll Z(H + 2, vll(W + 2, 0));
  while (N-- > 0) {
    cin >> A >> B >> C >> D;
    Z[A][B]++;
    Z[++C][++D]++;
    Z[A][D]--;
    Z[C][B]--;
  }
  rep(i, 1, H + 1) {
    rep(j, 1, W + 1)
        Z[i][j] += Z[i][j - 1];
  }
  rep(j, 1, W + 1) {
    rep(i, 1, H + 1)
        Z[i][j] += Z[i - 1][j];
  }
  rep(i, 1, H + 1) {
    rep(j, 1, W + 1) {
      cout << Z[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}