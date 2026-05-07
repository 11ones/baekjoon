// 2026년 3월 1일 20:56:09
// 맞았습니다!!
// 2412KB
// 12ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N;
  cin >> N;
  vector<int> v(N);
  for (auto &e : v) cin >> e;
  cout << (N == 2 && v[0] > v[1] ? "NO" : "YES");
}