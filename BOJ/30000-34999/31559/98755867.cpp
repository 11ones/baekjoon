// 2025년 9월 21일 22:46:35
// 맞았습니다!!
// 18848KB
// 76ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, S, c = 0, V = 1;
  cin >> N >> S;
  --S;
  vector<array<int, 2>> v(N);
  vector<set<int>> u(N);
  for(auto &e : v) cin >> e[0] >> e[1];
  while(S >= 0 && S < N) {
    if(u[S].find(V) != u[S].end()) break;
    u[S].insert(V);
    if(v[S][0]) {
      if(v[S][1] <= abs(V)) {
        v[S][1] = 1e9;
        ++c;
      }
    } else {
      V = (V > 0 ? -1 : 1) * v[S][1] - V;
    }
    S += V;
  }
  cout << c;
}