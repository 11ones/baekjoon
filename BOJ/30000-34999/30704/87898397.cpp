// 2024년 12월 28일 14:32:57
// 맞았습니다!!
// 2032KB
// 64ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int T, n, t;
  cin >> T;
  while (T--) {
    cin >> n;
    t = (int)sqrt(n);
    cout << 2 * (t + ceil((double)n / t)) << '\n';
  }
}