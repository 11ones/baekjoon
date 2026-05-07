// 2025년 9월 29일 19:48:10
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N;
  cin >> N;
  if (N % 4 != 0) {
    cout << -1;
    return 0;
  }
  string S[4] = {"aaab", "dabb", "ddcb", "dccc"};

  for (int i = 0; i < N; i += 4) {
    for (int j = 0; j < 4; ++j) {
      for (int k = 0; k < N; k += 4) {
        cout << S[j];
      }
      cout << '\n';
    }
  }
}