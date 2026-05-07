// 2025년 9월 30일 00:15:05
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int T;
  cin >> T;
  while (T--) {
    int L, k;
    array<int, 2> a;
    array<long double, 2> x, y;
    cin >> x[0] >> x[1] >> L >> k >> y[0] >> y[1];
    for (int i = k - 1; i >= k - L; --i) {
      a = {0, 0};
      for (int j = 0; j < 2; ++j) {
        long double m = powl(3, i);
        if (x[j] > y[j] && !(fabsl(x[j] - y[j]) < 1e-5) || x[j] + 3 * m < y[j] && !(fabsl(x[j] + 3 * m - y[j]) < 1e-5)) {
          cout << "0\n";
          goto E;
        }
        if (x[j] + m > y[j] || fabsl(x[j] + m - y[j]) < 1e-5) {
          ;
        } else if (x[j] + 2 * m < y[j] || fabsl(x[j] + 2 * m - y[j]) < 1e-5) {
          x[j] += 2 * powl(3, i);
        } else {
          x[j] += powl(3, i);
          a[j] = 1;
        }
      }
      if (a[0] == 1 && a[1] == 1) {
        cout << "0\n";
        goto E;
      }
    }
    cout << "1\n";
  E:;
  }
}