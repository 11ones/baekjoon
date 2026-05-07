// 2025년 3월 12일 22:57:18
// 맞았습니다!!
// 3732KB
// 24ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, c = 0;
  cin >> n;
  vector<int> v(n);
  stack<int> s;
  for (auto &e : v) cin >> e;
  for (int i = 0; i < n; ++i) {
    while (!s.empty() && s.top() <= v[i]) s.pop();
    if (!s.empty()) c++;
    s.push(v[i]);
  }
  while(!s.empty()) s.pop();
  for (int i = n - 1; i >= 0; --i) {
    while (!s.empty() && s.top() <= v[i]) s.pop();
    if (!s.empty()) c++;
    s.push(v[i]);
  }
  cout << c;
}