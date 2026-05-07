// 2025년 7월 23일 02:04:00
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int N, M, K, T, P, mx = 0;
vector<array<int, 3>> v;
set<int> t;
void f(int d, int y, int x, int c) {
  if (t.size() == K) {
    mx = K;
    return;
  }
  for (int i = 0; i < K; ++i) {
    if (t.find(i) != t.end()) continue;
    int ty = abs(y - v[i][0]), tx = abs(x - v[i][1]);
    if (d + ty + tx <= T) {
      t.insert(i);
      f(d + ty + tx, v[i][0], v[i][1], c + 1);
      t.erase(i);
    }
  }
  mx = max(mx, c);
}

int main() {
  cin >> N >> M >> K >> T >> P;
  v.resize(K);
  for (auto &e : v) {
    cin >> e[0] >> e[1] >> e[2];
  }
  for (int i = 0; i < K; ++i) {
    t.insert(i);
    f(0, v[i][0], v[i][1], 0);
    t.erase(i);
  }
  cout << mx << " ";
  mx = 0;
  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < M; ++j) {
      int c = 0;
      for (auto e : v) {
        int ty = abs(i - e[0]), tx = abs(j - e[1]);
        if (tx + ty) {
          if (P / (tx + ty) >= e[2]) ++c;
          continue;
        }
        ++c;
      }
      mx = max(mx, c);
    }
  }
  cout << mx;
}