// 2025년 4월 28일 14:55:32
// 맞았습니다!!
// 30264KB
// 264ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, t = 0;
  cin >> n >> m;
  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= m; ++j) {
      if ((i + j) % 2) {
        cout << "? " << i << " " << j << endl;
        cin >> t;
        if (t) return 0;
      }
    }
  }
}