// 2026년 1월 28일 03:02:35
// 맞았습니다!!
// 16148KB
// 156ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int Q;
  cin >> Q;
  map<int, int> m;
  while (Q--) {
    int a, b;
    cin >> a >> b;
    if (a == 1) {
      int mx = max({m[b], m[b + 1], m[b + 2], m[b + 3]}) + 1;
      for (int i = 0; i < 4; ++i) m[b + i] = mx;
    } else if (a == 2) {
      m[b] += 4;
    } else {
      cout << m[b] << "\n";
    }
  }
}