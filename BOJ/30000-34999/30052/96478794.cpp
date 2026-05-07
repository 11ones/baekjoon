// 2025년 7월 18일 17:21:39
// 맞았습니다!!
// 3212KB
// 600ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, d, c = 0;
  cin >> n >> m >> d;
  vector<vector<int>> v(n, vector<int>(m, 1));
  v[0][0] = 0;
  v[0][m - 1] = 0;
  v[n - 1][0] = 0;
  v[n - 1][m - 1] = 0;
  int dx[4] = {0, 1, 0, -1};
  int dy[4] = {1, 0, -1, 0};
  for (int i = n + m - 2; i > d; --i) {
    auto t = v;
    for (int j = 0; j < n; ++j) {
      for (int k = 0; k < m; ++k) {
        for (int l = 0; l < 4; ++l) {
          if (!v[j][k]) {
            int tx = dx[l] + k;
            int ty = dy[l] + j;
            if (tx < 0 || tx >= m || ty < 0 || ty >= n || !v[ty][tx]) continue;
            t[ty][tx] = 0;
          }
        }
      }
    }
    v = t;
  }
  for (auto e : v) {
    for (int f : e) {
      c += f;
    }
  }
  cout << c << '\n';
}