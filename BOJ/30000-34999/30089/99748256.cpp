// 2025년 10월 27일 19:28:40
// 맞았습니다!!
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int T;
  cin >> T;
  while (T--) {
    string s, s2, ts;
    cin >> s;
    for (int i = 0; i <= s.size(); ++i) {
      if (i) s2 = s[i - 1] + s2;
      ts = s + s2;
      for (int j = 0; j < ts.size() / 2; ++j) {
        if (ts[j] != ts[ts.size() - j - 1]) {
          goto E;
        }
      }
      cout << ts << '\n';
      break;
    E:;
    }
  }
}