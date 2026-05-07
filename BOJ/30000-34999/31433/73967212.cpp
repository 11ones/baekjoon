// 2024년 2월 25일 12:37:44
// 30점
// 3476KB
// 24ms
#include <iostream>
using namespace std;
int main() {
  string s;
  cin >> s;
  int l = s.length();
  int mn = 1'000'000;
  for (int o = 0; o < 3; o++) {
    int cska = 0;
    int check = o;
    for (int i = 0; i < l; i++) {
      switch (check) {
      case 0:
        if (s[i] == 'K') {
          check = 1;
          cska++;
        }
        break;
      case 1:
        if (s[i] == 'S') {
          check = 2;
          cska++;
        }
        break;
      case 2:
        if (s[i] == 'A') {
          check = 0;
          cska++;
        }
      }
      mn = min(mn, (l - cska) * 2);
    }
  }
  cout << mn;
}