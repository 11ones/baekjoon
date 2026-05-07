// 2026년 3월 10일 12:54:29
// 맞았습니다!!
// 2392KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N;
  string a, b;
  cin >> N >> a >> b;
  for (auto &e : a) if (e == '?') e = '9';
  cout << (N > b.size() || N == b.size() && a >= b ? a : "-1");
}