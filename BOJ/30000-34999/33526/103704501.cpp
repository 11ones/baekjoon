// 2026년 3월 10일 13:04:49
// 틀렸습니다
// KB
// ms
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
  for (int i = 0; i < 3 * N; ++i) {
    for (int j = 0; j < 3 * N; ++j) {
      cout << s[(i + j) % 6];
    }
    cout << '\n';
  }
}