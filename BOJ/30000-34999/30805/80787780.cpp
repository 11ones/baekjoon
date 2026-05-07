// 2024년 7월 9일 23:03:23
// 틀렸습니다
// KB
// ms
// https://www.acmicpc.net/problem/30805

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int m;
  cin >> m;
  vector<int> b(m);
  for (int i = 0; i < m; i++) {
    cin >> b[i];
  }
  auto at = max_element(a.begin(), a.end());
  auto bt = max_element(b.begin(), b.end());
  vector<int> v;
  while (1) {
    if (at == a.end() || bt == b.end()) {
      break;
    }
    if (*at == *bt) {
      v.push_back(*at);
      at = max_element(at + 1, a.end());
      bt = max_element(bt + 1, b.end());
    } else if (*at > *bt) {
      at = max_element(at + 1, a.end());
    } else {
      bt = max_element(bt + 1, b.end());
    }
  }
  cout << v.size() << '\n';
  for(auto e : v) {
    cout << e << ' ';
  }
}