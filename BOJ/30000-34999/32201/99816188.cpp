// 2025년 10월 30일 00:42:44
// 맞았습니다!!
// 7608KB
// 84ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int N, x, mx = -1e9;
  cin >> N;
  map<int, int> m;
  vector<int> v;
  for(int i = 1; i <= N; ++i) {
    cin >> x;
    m[x] = i;
  }
  for(int i = 1; i <= N; ++i) {
    cin >> x;
    int t = m[x] - i;
    if(mx <= t) {
      if(mx != t) v.clear();
      v.push_back(x);
      mx = t;
    }
  }
  for(auto e : v) cout << e << " ";
}