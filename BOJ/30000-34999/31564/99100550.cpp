// 2025년 10월 2일 14:00:21
// 맞았습니다!!
// 6000KB
// 80ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N, M, K, x, y;
  cin >> N >> M >> K;
  vector<vector<int>> v(N, vector<int>(M, 1e7));
  v[0][0] = 0;
  while (K--) {
    cin >> y >> x;
    v[y][x] = -1;
  }
  int dx[2][6] = {{0, 1, 0, -1, -1, -1}, {1, 1, 1, 0, -1, 0}};
  int dy[6] = {-1, 0, 1, 1, 0, -1};
  queue<array<int, 2>> q;
  q.push({0, 0});
  while(!q.empty()) {
    auto t = q.front();
    q.pop();
    for(int i = 0; i < 6; ++i) {
      int tx = t[1] + dx[t[0] % 2][i];
      int ty = t[0] + dy[i];
      if(tx < 0 || tx >= M || ty < 0 || ty >= N || v[ty][tx] <= v[t[0]][t[1]] + 1) continue;
      v[ty][tx] = v[t[0]][t[1]] + 1;
      q.push({ty, tx});
    }
  }
  cout << (v[N - 1][M - 1] > 1e6 ? -1 : v[N - 1][M - 1]);
}