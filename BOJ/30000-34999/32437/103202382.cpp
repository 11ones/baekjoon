// 2026년 2월 23일 05:51:22
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N, x;
  int v[41] = {0, 1, 2, };
  for(int i = 3; i <= 40; ++i) {
    v[i] = v[i - 1] + v[i - 2];
  }
  cin >> x;
  cout << v[x];
}