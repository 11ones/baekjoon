// 2025년 10월 7일 10:25:23
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;
typedef long L;

int main() {
 L W, H, N, tH, c = 0;
  cin >> W >> H >> N;
  vector<L> v(N), tv(N);
  for (auto &e : v) cin >> e;
  while (H > 0) {
    for (int i = N - 1; i >= 0; --i) {
      L s = 1 << i, u = H / s, tW = W;
      if (s <= tW && s <= H) {
        for (int j = i; j >= 0; --j) {
          L r = 1 << j, q = 1 << (i - j);
          tv[j] += u * (tW / r) * q;
          if (tv[j] > (1L << 52)) {
            cout << -1;
            return 0;
          }
          tW -= tW / r * r;
        }
        H -= u * s;
      }
    }
  }
  for (int i = N - 1; i >= 0; --i) {
    c += min(tv[i], v[i]);
    tv[i] -= min(tv[i], v[i]);
    if (i) tv[i - 1] += tv[i] * 4;
    if (tv[i] > (1L << 52)) {
      cout << -1;
      return 0;
    }
  }
  cout << (tv[0] ? -1 : c);
}