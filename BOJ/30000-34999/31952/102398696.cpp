// 2026년 1월 28일 18:35:28
// 시간 초과
// KB
// ms
#include <bits/stdc++.h>
using namespace std;
int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N, M, t, f;
  cin >> N >> M;
  vector<int> v(N), u(M);
  for(auto &e : v) cin >> e;
  for(auto &e : u) cin >> e;
  for(int i = 0; i < N; ++i) {
    t = 0, f = 3;
    for(auto e : u) {
      if(f % 2 && v[(i + t) % N] != e) --f;
      if(f > 1 && v[(i - t + N) % N] != e) f -= 2;
      ++t;
    }
    if(f) {
    cout << 1;
    return 0;
    }
  }
  cout << 0;
}