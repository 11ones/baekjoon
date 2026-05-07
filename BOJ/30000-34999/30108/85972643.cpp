// 2024년 11월 3일 16:02:20
// 맞았습니다!!
// 22532KB
// 372ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, s, x;
  cin >> n;
  vector<int> a(n + 1);
  vector<pair<int, int>> *v = new vector<pair<int, int>>[n + 1];
  for(int i = 2; i <= n; i++) {
    cin >> a[i];
  }
  cin >> s;
  for(int i = 2; i <= n; i++) {
    cin >> x;
    v[a[i]].push_back({x, i});
  }
  priority_queue<pair<int, int>> q;
  q.push({0, 1});
  while(!q.empty()) {
    auto t = q.top();
    q.pop();
    s += t.first;
    cout << s << '\n';
    for(auto e : v[t.second]) {
      q.push(e);
    }
  }
}