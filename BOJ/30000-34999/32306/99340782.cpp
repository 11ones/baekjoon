// 2025년 10월 12일 00:19:51
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, d, e, f;
  cin >> a >> b >> c >> d >> e >> f;
  a = a + 2 * b + 3 * c;
  b = d + 2 * e + 3 * f;
  cout << (a >= b ? a > b : 2);
}