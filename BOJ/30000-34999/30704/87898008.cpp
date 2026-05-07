// 2024년 12월 28일 14:24:59
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
 
  int T;
  cin >> T;
  while (T--) {
    int n;
    cin >> n;
    cout << 2 * (int)((int)sqrt(n) + n / (int)sqrt(n)) << '\n';
  }
}