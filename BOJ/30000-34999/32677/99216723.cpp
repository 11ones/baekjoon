// 2025년 10월 7일 10:31:11
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;
typedef __int128_t L;

int main() {
  L W, H, N, tH, c = 0;
  long w, h, n;

  cin >> w >> h >> n;
  W = w, H = h, N = n;
  vector<L> v(N), tv(N);
  for (int i = 0; i < N; ++i) {
    cin >> w;
    v[i] = w;
  }
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
  if (tv[0]) {
    cout << -1;
    return 0;
  }
  L i = 1;
  bool x = 0;
  for(int j = 0; j < 30; ++j)  i *= 10;
  for (; i > 0; i /= 10) {
    if (c / i) x = 1;
    if (x) {
      cout << int(c / i);
      c -= c / i * i;
    }
  }
}