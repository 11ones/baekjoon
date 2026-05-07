// 2025년 9월 29일 19:19:50
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M, c = 0;
  cin >> N >> M;
  vector<vector<char>> v(N, vector<char>(M));
  for(auto &e : v) {
    for(auto &f : e) {
      cin >> f;
    }
  }
  int dx[4] = {0, 1, 0, -1};
  int dy[4] = {1, 0, -1, 0};
  for(int i = 0; i < N; ++i) {
    for(int j = 0; j < M; ++j) {
      if(v[i][j] != 'X') continue;
      for(int k = 0; k < 4; ++k) {
        int ty = dy[k] + i;
        int tx = dx[k] + j;
        if(tx < 0 || tx >= M || ty < 0 || ty >= N || v[ty][tx] != 'Y') continue;
        ++c;
      }
    }
  }
  cout << c;
}