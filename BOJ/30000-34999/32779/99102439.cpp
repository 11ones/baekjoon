// 2025년 10월 2일 14:52:43
// 맞았습니다!!
// 2020KB
// 68ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int Q, a, m;
  cin >> Q;
  while(Q--) {
    cin >> a >> m;
    cout << int(a * m * 105.6 / 60000) << '\n';
  }
}