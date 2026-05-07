// 2025년 8월 27일 16:05:30
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, X, s = 0, x;
  cin >> N >> X;
  for(int i = 0; i < N; ++i) {
    cin >> x;
    s += x;
  }
  cout << !(s % X);
}