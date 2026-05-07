// 2025년 9월 30일 00:47:26
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
    long double p, q;
    array<int, 2> a;
    array<long, 2> x, y;
    long A, B, L, K, P, Q;
    cin >> A >> B >> L >> K >> p >> q;
    x = {A * 1000, B * 1000};
    y = {llroundl(p * 1000), llroundl(q * 1000)};
    long t = 1000;
    for(int i = 0; i < L; ++i) {
      t *= 3;
    }
    for(int i = 0; i < K; ++i) {
      a = {0, 0};
      t /= 3;
      for (int j = 0; j < 2; ++j) {
        if (x[j] > y[j] || x[j] + 3 * t < y[j]) {
          cout << "0\n";
          goto E;
        }

        if(x[j] + t < y[j] && x[j] + 2 * t > y[j]) {
          x[j] += t;
          a[j] = 1;
        } else if(x[j] + 2 * t <= y[j]) {
          x[j] += 2 * t;
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