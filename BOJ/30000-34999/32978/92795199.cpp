// 2025년 4월 8일 17:04:31
// 맞았습니다!!
// 2160KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  set<string> a;
  int n;
  string s;
  cin >> n;
  for(int i = 0; i < n; ++i) {
    cin >> s;
    a.insert(s);
  }
  for(int i = 1; i < n; ++i) {
    cin >> s;
    a.erase(s);
  }
  cout << *a.begin();
}