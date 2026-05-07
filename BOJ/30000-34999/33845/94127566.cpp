// 2025년 5월 10일 18:39:41
// 맞았습니다!!
// 2172KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  string S, T, t;
  cin >> S >> T;
  set<char> s;
  for(auto e : S) s.insert(e);
  for(auto e : T) if(s.find(e) == s.end()) t += e;
  cout << t;
}