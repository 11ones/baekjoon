// 2024년 11월 26일 22:37:28
// 시간 초과
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
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  v.push_back(".");
  int l = 0, r = 1, s = -1;
  auto f = v.begin(), b = f;
  unordered_map<string, int> m;
  while (b != v.end()) {
    ++m[*b];
    bool c = 0;
    while (m[*b] > 1) {
      --m[*f];
      ++f;
      c = 1;
    }
    ++b;
    if (c) {
      --f;
      --b;
    }
    if (*f == *b) {
      for (int i = 1; i <= n; i++) {
        auto tf = f, t = f + i * (b - f);
        for (int j = 0; j < b - f; j++) {
          if (*tf != *t) {
            if (i > r) {
              l = b - f;
              r = i;
              s = f - v.begin();
            }
            goto E;
          }
          ++tf;
          ++t;
        }
      }
    }
  E:
    if (c) {
      ++b;
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