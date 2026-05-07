// 2025년 3월 12일 18:59:11
// 맞았습니다!!
// 3132KB
// 44ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int tc;
  cin >> tc;
  while (tc--) {
    int n, t = 1;
    cin >> n;
    vector<int> v(n);
    array<array<int, 2>, 2> u{};
    for (auto &e : v) cin >> e;
    for (auto e : v) {
      if (e == t) {
        t++;
        for (int i = 0; i < 2; i++) {
          for (auto &f : u) {
            if (t == f[0]) {
              t = f[1] + 1;
              f = {};
            }
          }
        }
        continue;
      }
      for (auto &f : u) {
        if (f[1] == e - 1) {
          f[1] = e;
          goto E;
        }
      }
      for (auto &f : u) {
        if (f[0] == 0) {
          f = {e, e};
          goto E;
        }
      }
      E:;
    }
    cout << (t == n + 1 ? "YES\n" : "NO\n");
  }
}