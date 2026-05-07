// 2024년 10월 27일 23:48:32
// 맞았습니다!!
// 2020KB
// 16ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n;
  vector<int> v(n);
  for(int i = 0; i < n; i++) {
    cin >> v[i];
  }
  cin >> m;
  while(m--) {
    auto tv = v;
    int a, b;
    cin >> a >> b;
    vector<int> p;
    for(int i = 0; i < n; i++) {
      if(v[i] >= a && v[i] <= b) {
        p.push_back(i);
      }
    }
    for(auto e : p) {
      v[e] = a++;
    }
    for(auto e : v) {
      cout << e << " ";
    }
    cout << '\n';
    v = tv;
  }
}