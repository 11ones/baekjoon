// 2025년 10월 7일 00:29:45
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  vector<int> v(20);
  for(int &e : v) cin >> e;
  for(int i = 0; i < 20; ++i) {
    if(v[i] == 20) {
      t = v[(i + 19) % 20] + v[i] + v[(i + 1) % 20];
    }
  }
  t *= 2;
  cout << (t == 63 ? "Tie" : (t > 63 ? "Alice" : "Bob"));
}