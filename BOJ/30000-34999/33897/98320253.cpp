// 2025년 9월 9일 16:59:18
// 맞았습니다!!
// 2020KB
// 160ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, c = 0, mx = 0, e = 0, b = 0, x;
  cin >> N;
  for (int i = 0; i < N; ++i) {
    cin >> x;
    if(b > x) {
      ++c;
      mx = max(mx, e);
      e = 0;
    }
    ++e;
    b = x;
  }
  ++c;
  mx = max(mx, e);
  cout << c << " " << mx;
}