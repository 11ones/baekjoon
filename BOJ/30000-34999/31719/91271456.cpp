// 2025년 3월 12일 16:47:17
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int tc;
  cin >> tc;
  while (tc--) {
    int n;
    cin >> n;
    vector<int> v(n), u(3);
    for (auto &e : v) cin >> e;
    for (auto e : v) {
      for (auto &f : u) {
        if (f < e) {
          f = e;
          goto E;
        }
      }
      cout << "NO\n";
      goto F;
    E:;
    }
    cout << "YES\n";
  F:;
  }
}