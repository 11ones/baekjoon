// 2026년 3월 30일 15:28:35
// 맞았습니다!!
// 2392KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N, c = 0, t = 0, mn;
  string S;
  cin >> N >> S;
  for (auto &e : S)
    if (e == 'B') ++t;
  mn = min(t, N - t);
  for (int i = 0; i < N; ++i) {
    if (S[i] == 'B') ++c;
    mn = min(mn, i - c + 1 + t - c);
  }
  cout << mn;
}