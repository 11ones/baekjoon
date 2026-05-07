// 2026년 3월 10일 13:07:10
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N;
  cin >> N;
  if (N == 1) {
    cout << "ZNA\nNAZ\nAZN";
    return 0;
  }
  string s, t = "ZNA";
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < N; ++j) {
      s += t[i];
    }
  }
  N *= 3;
  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < N; ++j) {
      cout << s[(i + j) % N];
    }
    cout << '\n';
  }
}