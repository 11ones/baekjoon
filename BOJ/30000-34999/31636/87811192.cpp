// 2024년 12월 26일 02:08:38
// 100점
// 2268KB
// 4ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;
  int t = 0;
  for (auto e : s) {
    if (e == 'o')
      t++;
    else
      t = 0;
    if (t >= 3) {
      cout << "Yes";
      return 0;
    }
  }
  cout << "No";
}