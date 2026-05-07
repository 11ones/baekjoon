// 2025년 3월 12일 17:38:00
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, l, c = 0;
  string s, t, q = "skeep", r = "AAAAA";
  cin >> n >> s;
  l = n;
  while (1) {
    for (int i = 0; i < n - 4; i++) {
      for (int j = 0; j < 5; j++) {
        if (s[i + j] != q[j] && s[i + j] != r[j]) {
          goto E;
        }
      }
      t += 'A';
      l -= 4;
      i += 4;
      c++;
      continue;
    E:;
      t += s[i];
    }
    if(l == n) {
      break;
    }
    s = t;
    t = "";
    n = l;
  }
  cout << c;
}