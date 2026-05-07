// 2025년 9월 21일 23:08:20
// 맞았습니다!!
// 2268KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int x = 6, i = 2, l = s.size();
  if (l == 2)
    cout << 0;
  else if (l == 4)
    cout << 1;
  else
    while (1) {
      if (1 + x + i == l) {
        cout << i;
        break;
      }
      x += 1 + x + i++;
    }
}