// 2025년 10월 7일 00:25:53
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int c = 0, t;
  vector<int> v(20);
  for(int &e : v) cin >> e;
  for(int i = 0; i < 20; ++i) {
    if(v[i] == 20) {
      t = v[(i + 19) % 20] + v[i] + v[i + 1];
    }
    c += v[i];
  }
  t *= 20;
  c *= 3;
  cout << (t == c ? "Tie" : (t > c ? "Alice" : "Bob"));
}