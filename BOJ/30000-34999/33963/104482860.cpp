// 2026년 3월 30일 02:35:49
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  long N, c = 0;
  cin >> N;
  while (to_string(N)[0] < '5') N <<= 1, ++c;
  cout << c;
}