// 2025년 9월 21일 23:23:47
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int X, Y;
  cin >> X >> Y;
  for(int i = 1; i <= X * Y; ++i) {
    if(!(i % X) && !(i % Y)) cout << 3;
    else if(!(i % Y)) cout << 1;
    else if(!(i % X)) cout << 2;
  }
}