// 2025년 9월 16일 14:55:38
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> v(N);
  for(int &e : v) cin >> e;
  auto f = v.begin(), b = --v.end();
  int fr = 0, br = 0;
  while(f <= b) {
    fr * 2 < br ? (fr += *f, ++f) : (br += *b, --b);
  }
  cout << min(fr, br / 2);
}