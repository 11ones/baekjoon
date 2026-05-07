// 2025년 4월 8일 17:27:51
// 맞았습니다!!
// 2160KB
// 32ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, k, mx = 0;
  cin >> n >> k;
  vector<int> v(n);
  for (int &e : v) cin >> e;
  for (int i = 0; i < n; ++i) {
    int f = v[i], t = 0, c = 1;
    for (int j = i + 1; j < n; ++j) {
      if (f == v[j]) {
        ++c;
      } else {
        ++t;
      }
      if (t > k) break;
    }
    mx = max(mx, c);
  }
  cout << mx;
}