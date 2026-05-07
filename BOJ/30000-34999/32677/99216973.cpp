// 2025년 10월 7일 10:55:50
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
 long W, H, N, c = 0;
  cin >> W >> H >> N;
  vector<long> v(50), tv(50);
  for(int i = 0; i < N; ++i) {
    cin >> v[i];
  }
  while (H > 0) {
    for (int i = 50; i >= 0; --i) {
      long s = 1L << i, u = H / s, tW = W;
      if (s <= tW && s <= H) {
        for (int j = i; j >= 0; --j) {
          long r = 1L << j, q = 1L << (i - j);
          tv[j] += u * (tW / r) * q;
          tW -= tW / r * r;
        }
        H -= u * s;
      }
    }
  }
  for (int i = 50; i >= 0; --i) {
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