// 2026년 3월 29일 04:09:55
// 맞았습니다!!
// 2028KB
// 608ms
#include <bits/stdc++.h>
using namespace std;

int N, K, mx = -1;
map<int, int> m;
vector<array<int, 3>> v;

void r(int d, int t, int b, int g) {
  if (t > K) return;
  if (d == N) {
    mx = max(mx, g);
  }
  for (int i = 0; i < N; ++i) {
    if(m[i]) continue;
    m[i] = 1;
    r(d + 1, v[b][2] * v[i][2], i, g + v[b][0] * v[i][1]);
    m[i] = 0;
  }
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin >> N >> K;
  v.resize(N, array<int, 3>());
  for (auto &e : v) cin >> e[0];
  for (auto &e : v) cin >> e[1];
  for (auto &e : v) cin >> e[2];
  v.push_back({0, 0});
  r(0, 0, N, 0);
  cout << mx;
}