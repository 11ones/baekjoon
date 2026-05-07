// 2025년 4월 28일 13:45:53
// 맞았습니다!!
// 2032KB
// 0ms
#include<bits/stdc++.h>
using namespace std;

int main() {
  int n, w, d, p;
  string s;
  cin >> n;
  vector<bool> b(100);
  map<string, array<int, 2>> m;
  for(int i = 0; i < n; ++i) {
    cin >> s >> w >> d >> p;
    m[s] = {w * 7 + d, p};
  }
  for(int i = 0; i < n; ++i) {
    cin >> s >> p;
    if(m[s][1] <= p) {
      b[m[s][0]] = 1;
    }
  }
  int mx = 0, t = 0;
  for(auto e : b) {
    if(!e) {
      mx = max(mx, t);
      t = 0;
    }
    t += e;
  }
  mx = max(mx, t);
  cout << mx;
}