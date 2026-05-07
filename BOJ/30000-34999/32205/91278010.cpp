// 2025년 3월 12일 18:30:13
// 맞았습니다!!
// 49016KB
// 944ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, t;
  cin >> n;
  map<int, int> m;
  for(int i = 0; i < 3 * n; i++) {
    cin >> t;
    m[t]++;
  }
  for(auto e : m) {
    if(e.second > 1) {
      cout << 1;
      return 0;
    }
  }
  cout << 0;
}