// 2024년 12월 28일 14:13:23
// 시간 초과
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
    for(int i = sqrt(n); i > 0; i--) {
      if(!(n % i)) {
        cout << 2 * (i + n / i) << '\n';
        break;
      }
    }
  }
}