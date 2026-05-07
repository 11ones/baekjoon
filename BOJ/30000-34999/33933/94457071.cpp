// 2025년 5월 18일 14:01:32
// 맞았습니다!!
// 2160KB
// 120ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M, T, t = 0, n = 1, mn = 1e9;
  cin >> N >> M >> T;
  vector<vector<int>> v(N + 1);
  vector<int> I(T), p;
  while (M--) {
    int a, b;
    cin >> a >> b;
    v[a].push_back(b);
    v[b].push_back(a);
  }
  set<int> s;
  s.insert(1);
  for (int i = 0; i < T; ++i) {
    cin >> I[i];
    if (I[i] == N) p.push_back(i);
  }
  for (int o = 0;; ++o) {
    if (*--s.end() == N) {
      cout << min(o, mn);
      return 0;
    }
    auto u = s;
    if (s.find(I[o % T]) != s.end()) {
      for(int e : p) {
        mn = min(mn, o + (e + T - o % T) % T);
      }
      u.erase(I[o % T]);
      s.erase(I[o % T]);
    }
    for (auto e : s) {
      for (auto f : v[e]) {
        u.insert(f);
      }
    }
    s = u;
    if (n < s.size()) {
      n = s.size();
      t = 0;
    }
    if (t > T * 2 || s.empty()) {
      if (mn < 1e8)
        cout << mn;
      else
        cout << "-1";
      return 0;
    }
    ++t;
  }
}