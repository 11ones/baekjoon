// 2025년 9월 29일 23:53:57
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while(T--) {
    int L, k, c, d;
    long double a, b, p, q;
    cin >> a >> b >> L >> k >> p >> q;
    for(int i = k - 1; i >= k - L; --i) {
      if(a > p || a + powl(3, i + 1) < p) {
        cout << "0\n";
        goto E;
      }
      if(a + powl(3, i) >= p) {
        c = 0;
      } else if(a + 2 * powl(3, i) <= p) {
        a += 2 * powl(3, i);
        c = 2;
      } else {
        a += powl(3, i);
        c = 1;
      }
      if(b > q || b + powl(3, i + 1) < q) {
        cout << "0\n";
        goto E;
      }
      if(b + powl(3, i) >= q) {
        d = 0;
      } else if(b + 2 * powl(3, i) <= q) {
        b += 2 * powl(3, i);
        d = 2;
      } else {
        b += powl(3, i);
        d = 1;
      }
      if(c == 1 && d == 1) {
        cout << "0\n";
        goto E;
      }
    }
    cout << "1\n";
    E:;
  }
}