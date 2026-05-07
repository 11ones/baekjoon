// 2024년 12월 28일 14:27:31
// 틀렸습니다
// KB
// ms
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
    cout << 2 * (int)(t + ceil(n / t)) << '\n';
  }
}