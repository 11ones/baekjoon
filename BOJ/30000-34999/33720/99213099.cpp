// 2025년 10월 7일 00:40:43
// 시간 초과
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<long> v = {2};
  for (long i = 3; i <= 1e6; ++i) {
    for (long &e : v) {
      if (!(i % e) || e * e > i) goto E;
    }
    v.push_back(i);
  E:;
  }
  long N, c = 0;
  cin >> N;
  auto t = v.begin();
  while (N != 0) {
    for (long &e : v) {
      if (!(N % e)) {
        ++c;
        N -= e;
        goto F;
      }
    }
    cout << 1;
    return 0;
    F:;
  }
  cout << c;
}