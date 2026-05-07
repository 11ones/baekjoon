// 2025년 10월 7일 00:48:01
// 틀렸습니다
// KB
// ms
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
      cout << N / i;
      return 0;
    }
  E:;
  }
  cout << 1;
}