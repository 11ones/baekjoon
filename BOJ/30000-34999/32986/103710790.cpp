// 2026년 3월 10일 15:22:33
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int X, Y, Z;
  cin >> X >> Y >> Z;
  cout << (X == 3 && Y == 3 && Z == 3 ? 0 : min({--X, --Y, --Z}) / 2);
}