// 2025년 9월 29일 20:47:43
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N;
  array<int, 3> a;
  cin >> N;
  vector<vector<char>> v(N, vector<char>(N));
  vector<vector<int>> vst(N, vector<int>(N, 1e9));

  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < N; ++j) {
      cin >> v[i][j];
      if (v[i][j] == 'R') a = {i, j, 0};
    }
  }
  vst[a[0]][a[1]] = 0;
  int dx[4] = {0, 1, 0, -1};
  int dy[4] = {1, 0, -1, 0};
  queue<array<int, 3>> q;
  q.push(a);
  while (!q.empty()) {
    auto t = q.front();
    q.pop();
    for (int i = 0; i < 4; ++i) {
      auto tp = t;
      tp = {tp[0] + dy[i], tp[1] + dx[i]};
      while (tp[0] >= 0 && tp[0] < N && tp[1] >= 0 && tp[1] < N && v[tp[0]][tp[1]] != 'B' && vst[tp[0]][tp[1]] > t[2] + 1) {
        vst[tp[0]][tp[1]] = t[2] + 1;
        q.push({tp[0], tp[1], t[2] + 1});
        if (v[tp[0]][tp[1]] == 'W') {
          break;
        }
        if (v[tp[0]][tp[1]] == 'K') {
          cout << vst[tp[0]][tp[1]];
          return 0;
        }
        tp = {tp[0] + dy[i], tp[1] + dx[i]};
      }
    }
  }
  cout << -1;
}