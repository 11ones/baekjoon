#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  string s;
  cin >> s;
  int N = s.size();
  const long MOD = 998244353;
  vector<array<long, 3>> v(N);
  v[0][s[0] - 'a'] = 1;
  for (int i = 1; i < N; ++i) {
    int x = s[i] - 'a';
    for (int j = 0; j < 3; ++j) v[i][j] = v[i - 1][j];
    v[i][x] += v[i - 1][(x + 1) % 3] + v[i - 1][(x + 2) % 3] + 1;
    v[i][x] %= MOD;
  }
  cout << (v[N - 1][0] + v[N - 1][1] + v[N - 1][2]) % MOD;
}