// 2026년 3월 11일 22:56:59
// 맞았습니다!!
// 21856KB
// 128ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N, M, K, l = 0;
  cin >> N >> M >> K;
  vector<int> v;
  map<int, int> m;
  for (int i = 1; i <= M; ++i) {
    if (l == N) break;
    if (m[i]) continue;
    v.push_back(i), ++m[i ^ K], ++l;
  }
  if (l != N)
    cout << -1;
  else
    for (int e : v) cout << e << " ";
}