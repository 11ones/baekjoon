// 2025년 10월 7일 01:02:55
// 맞았습니다!!
// 3568KB
// 136ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  long N;
  cin >> N;
  vector<long> v;
  for (long i = 2; i <= 1e6; ++i) {
    for (long &e : v) {
      if(e * e > i) break;
      if (!(i % e)) goto E;
    }
    v.push_back(i);
    if(!(N % i)) {
      cout << (i == N ? 1 : (N - i) / 2 + 1);
      return 0;
    }
  E:;
  }
  cout << 1;
}