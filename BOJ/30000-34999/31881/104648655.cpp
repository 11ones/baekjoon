// 2026년 4월 3일 04:21:12
// 맞았습니다!!
// 11396KB
// 80ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N, Q, x, y;
  cin >> N >> Q;
  set<int> v;
  while (Q--) {
    cin >> x;
    if (x == 1) {
      cin >> y;
      v.insert(y);
    } else if (x == 2) {
      cin >> y;
      v.erase(y);
    } else {
      cout << N - v.size() << '\n';
    }
  }
}