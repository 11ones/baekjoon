// 2025년 10월 2일 14:30:09
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<long> d(N), v(N);
  for(long &e : v) cin >> e;
  d[0] = v[0], d[1] = (N == 1 ? v[0] : v[1]);
  for(int i = 2; i < N; ++i) {
    d[i] = v[i] + min(d[i - 1], d[i - 2]);
  }
  cout << min(d[N - 1], d[N - 2]);
}