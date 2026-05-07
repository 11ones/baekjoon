// 2025년 10월 2일 13:13:00
// 맞았습니다!!
// 9836KB
// 388ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, x, xx, xy, nx, ny, c = 0;
  cin >> N;
  vector<array<int, 2>> v(N * N + 1);
  for(int i = 0; i < N; ++i) {
    for(int j = 0; j < N; ++j) {
      cin >> x;
      v[x] = {i, j};
    }
  }
  xx = nx = v[1][1], xy = ny = v[1][0];
  for(int i = 1; i <= N * N; ++i) {
    xx = max(xx, v[i][1]);
    xy = max(xy, v[i][0]);
    nx = min(nx, v[i][1]);
    ny = min(ny, v[i][0]);
    if((xx - nx + 1) * (xy - ny + 1) == i) ++c;
  }
  cout << c;
}