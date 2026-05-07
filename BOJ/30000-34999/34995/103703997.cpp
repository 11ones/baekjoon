// 2026년 3월 10일 12:47:52
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N;
  string a, b;
  cin >> N >> a >> b;
  for (auto &e : a) if (e == '?') e = '9';
  cout << (a.size() > b.size() || a.size() == b.size() && a > b ? a : "-1");
}