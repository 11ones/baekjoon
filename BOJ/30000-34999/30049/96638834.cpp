// 2025년 7월 23일 03:34:11
// 시간 초과
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M, K, Q, x, y, z, c = 0;
  cin >> N >> M >> K;
  map<int, int> m;
  vector<array<int, 2>> t(M + 1);
  vector<map<int, int>> v(N + 1);
  for (int i = 1; i <= N; ++i) {
    for (int j = 0; j < K; ++j) {
      cin >> x >> y;
      v[i][x] = y;
    }
  }
  for (int i = 1; i <= M; ++i) {
    int mx = 0, p = 0;
    for (int j = 1; j <= N; ++j) {
      if (v[j].find(i) != v[j].end() && mx < v[j][i]) {
        mx = v[j][i];
        p = j;
      }
    }
    t[i] = {p, mx};
    ++m[p];
  }
  for (auto e : m) {
    if (e.second == K) ++c;
  }
  cin >> Q;
  while (Q--) {
    cin >> x >> y >> z;
    v[x][y] += z;
    if(v[x][y] > t[y][1]) {
      if(m[t[y][0]] == K) {
        --c;
      }
      --m[t[y][0]];
      ++m[x];
      if(m[x] == K) {
        ++c;
      }
      t[y] = {x, v[x][y]};
    }
    cout << c << "\n";
  }
}