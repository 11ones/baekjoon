// 2025년 4월 28일 14:33:43
// 맞았습니다!!
// 2020KB
// 28ms
#include<bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while(T--) {
    int a, b, c;
    cin >> a >> b >> c;
    int s = 0;
    s = min(b, c);
    cout << s + a - 1 << '\n';
  }
}