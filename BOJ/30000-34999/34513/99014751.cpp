// 2025년 9월 29일 19:37:03
// 시간 초과
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
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
  int dx[4] = {0, 1, 0, -1};
  int dy[4] = {1, 0, -1, 0};
  queue<array<int, 2>> q;
  q.push(a);
  while (!q.empty()) {
    auto t = q.front();
    q.pop();
    for (int i = 0; i < 4; ++i) {
      auto tp = t;
      tp = {tp[0] + dy[i], tp[1] + dx[i]};
      while (tp[0] >= 0 && tp[0] < N && tp[1] >= 0 && tp[1] < N && v[tp[0]][tp[1]] != 'B') {
        if (vst[tp[0]][tp[1]] > vst[t[0]][t[1]] + 1) {
          vst[tp[0]][tp[1]] = vst[t[0]][t[1]] + 1;
          q.push({tp[0], tp[1]});
        }
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