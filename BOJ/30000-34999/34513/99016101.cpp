// 2025년 9월 29일 20:20:14
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N;
  array<int, 2> a;
  cin >> N;
  vector<vector<char>> v(N, vector<char>(N));
  vector<vector<int>> vst(N, vector<int>(N, 1e9));

  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < N; ++j) {
      cin >> v[i][j];
      if (v[i][j] == 'R') a = {i, j};
    }
  }
  vst[a[0]][a[1]] = 0;
  int dx[2][2] = {{1, -1}, {0, 0}};
  int dy[2][2] = {{0, 0}, {1, -1}};
  queue<array<int, 3>> q;
  q.push({a[0], a[1], 0});
  q.push({a[0], a[1], 1});
  while (!q.empty()) {
    auto t = q.front();
    q.pop();
    for (int i = 0; i < 2; ++i) {
      auto tp = t;
      tp = {tp[0] + dy[tp[2]][i], tp[1] + dx[tp[2]][i], tp[2]};
      while (tp[0] >= 0 && tp[0] < N && tp[1] >= 0 && tp[1] < N && v[tp[0]][tp[1]] != 'B') {
        if (vst[tp[0]][tp[1]] > vst[t[0]][t[1]] + 1) {
          vst[tp[0]][tp[1]] = vst[t[0]][t[1]] + 1;
          if (v[tp[0]][tp[1]] == 'W') {
            q.push({tp[0], tp[1], tp[2]});
            break;
          }
          q.push({tp[0], tp[1], !tp[2]});
        }
        if (v[tp[0]][tp[1]] == 'K') {
          cout << vst[tp[0]][tp[1]];
          return 0;
        }
        tp = {tp[0] + dy[tp[2]][i], tp[1] + dx[tp[2]][i], tp[2]};
      }
    }
  }
  cout << -1;
}