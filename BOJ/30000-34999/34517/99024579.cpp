// 2025년 9월 30일 00:06:58
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
        if (x[j] > y[j] || x[j] + powl(3, i + 1) < y[j]) {
          cout << "0\n";
          goto E;
        }

        if(x[j] + powl(3, i) < y[j] && x[j] + 2 * powl(3, i) > y[j]) {
          x[j] += powl(3, i);
          a[j] = 1;
        } else if(x[j] + 1.5 * powl(3, i) < y[j]) {
          x[j] += 2 * powl(3, i);
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