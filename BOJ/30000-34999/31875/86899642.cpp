// 2024년 11월 26일 23:51:18
// 런타임 에러 (OutOfBounds)
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<string> v(n);
  vector<int> x(n + 1), y(n + 2);
  unordered_map<string, int> m;
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    if (!m[v[i]]) {
      m[v[i]] = i + 1;
    }
    x[i] = m[v[i]];
  }
  x[n] = n;
  int l = 0, r = 1, s = -1, f = 0, b = 1;
  y[x[b - 1]]++;
  while (b <= n) {
    for (int i = 0; b <= n; i++) {
      if (x[f] != x[b]) {
        if (i / (b - f) >= r) {
          l = b - f;
          r = i / (b - f) + 1;
          s = f - i;
        }
        break;
      }
      f++;
      b++;
    }
    b++;
    y[x[b - 1]]++;
    bool c = 0;
    while (y[x[b - 1]] > 1) {
      y[x[f++]]--;
      c = 1;
    }
    if (c) {
      f--;
      b--;
    }
  }
  if (s == -1) {
    cout << -1;
    return 0;
  }
  cout << l << " " << r << '\n';
  for (int i = s; i < s + l; i++) {
    cout << v[i] << " ";
  }
}