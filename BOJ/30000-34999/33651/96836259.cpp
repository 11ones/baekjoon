// 2025년 7월 28일 16:51:08
// 맞았습니다!!
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, t = "UAPC";
  cin >> s;
  for(char e : t) {
    for(char c : s) {
      if(e == c) goto E;
    }
    cout << e;
    E:;
  }
}