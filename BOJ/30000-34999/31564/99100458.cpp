// 2025년 10월 2일 13:57:36
// 시간 초과
// KB
// ms
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
  queue<pair<int, int>> q;
  q.push({0, 0});
  while(!q.empty()) {
    auto t = q.front();
    q.pop();
    for(int i = 0; i < 6; ++i) {
      int tx = t.second + dx[t.first % 2][i];
      int ty = t.first + dy[i];
      if(tx < 0 || tx >= M || ty < 0 || ty >= N || v[ty][tx] < v[t.first][t.second] + 1) continue;
      v[ty][tx] = v[t.first][t.second] + 1;
      q.push({ty, tx});
    }
  }
  cout << (v[N - 1][M - 1] > 1e6 ? -1 : v[N - 1][M - 1]);
}