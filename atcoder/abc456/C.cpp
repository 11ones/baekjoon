#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  long x = 1, c = 0;
  const long MOD = 998244353;
  string s;
  cin >> s;
  for (int i = 1; i < s.size(); ++i) {
    if (s[i] == s[i - 1]) {
      c += x * (x + 1) / 2;
      x = 0;
    }
    ++x;
  }
  c += x * (x + 1) / 2;
  cout << c % MOD;
}