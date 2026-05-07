// 2025년 9월 16일 22:48:01
// 맞았습니다!!
// 2312KB
// 216ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);
  int N, M, K, x;
  cin >> N >> M >> K;
  map<int, int> m;
  for(int i = 0; i < K; ++i) {
    cin >> x;
    m[x] = 1;
  }
  vector<array<int, 3>> v(M);
  for(auto &e : v) {
    cin >> e[0] >> e[1] >> e[2];
  }
  sort(v.begin(), v.end());
  for(auto e : m) {
    x = 1;
    map<int, int> u;
    u[e.first] = 1;
    for(auto t : v) {
      if(u[t[1]] && !u[t[2]]) {
        u[t[2]] = 1;
        if(m[t[2]]) ++x;
        else goto E;
      }
    }
    if(x == K) cout << e.first;
    E:;
  }
}