// 2026년 1월 22일 19:27:33
// 100점
// 2020KB
// 12ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N, x;
  cin >> N;
  int o = 0, t = 0;
  while (N--) {
    cin >> x;
    x == 1 ? o++ : t++;
  }
  cout << (o >= t && (o - t) % 3 == 0 ? "Yes" : "No");
}