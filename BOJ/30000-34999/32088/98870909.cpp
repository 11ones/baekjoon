// 2025년 9월 25일 01:22:25
// 맞았습니다!!
// 2804KB
// 120ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  long N, s = 0;
  cin >> N;
  vector<int> v(N);
  for (int &e : v) cin >> e, s += e;
  for (int e : v)
    if (e > (s - e) * 2) {
      s = (s - e) * 3;
      break;
    }
  cout << s / 3;
}