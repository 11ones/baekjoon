// 2025년 3월 12일 18:22:42
// 맞았습니다!!
// 4128KB
// 16ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, c = 0, l = 0;
  string s, t, q = "skeep", r = "sAAAA";
  cin >> n >> s;
  for (auto e : s) {
    if (e == 's' || e == 'k' || e == 'e' || e == 'p') {
      t += e;
      l++;
    } else {
      t = "";
      l = 0;
    }
    while (l > 4) {
      for (int i = l - 5; i < l; i++) {
        if (t[i] != q[i - l + 5] && t[i] != r[i - l + 5]) {
          goto E;
        }
      }
      for (int i = 0; i < 5; i++) {
        t.pop_back();
      }
      t += 'A';
      l -= 4;
      c++;
    }
  E:;
  }

  cout << c;
}