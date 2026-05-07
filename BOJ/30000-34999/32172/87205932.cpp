// 2024년 12월 5일 22:37:47
// 맞았습니다!!
// 5588KB
// 20ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  map<int, bool> s;
  int t = 0;
  s[t] = 1;
  for (int i = 1; i <= n; i++) {
    if (t - i < 0 || s[t- i]) {
      t += i;
    } else {
      t -= i;
    }
    s[t] = 1;
  }
  cout << t;
}