#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int T;
  cin >> T;
  while (T--) {
    int N;
    cin >> N;
    long A = 0, B = 0, C = 0, P = 0;
    vector<array<long, 4>> v(N);
    for (auto &e : v) {
      cin >> e[1] >> e[2] >> e[3] >> e[0];
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < N; ++i) {
      auto &t = v[i];
      long da = t[1] > A ? t[1] - A : 0;
      long db = t[2] > B ? t[2] - B : 0;
      long dc = t[3] > C ? t[3] - C : 0;
      if(t[0] - P > da + db + dc) {
        A += da;
        B += db;
        C += dc;
        P += da + db + dc + 1;
      } else {
        cout << "NO\n";
        goto E;
      }
    }
    cout << "YES\n";
    E:;
  }
}