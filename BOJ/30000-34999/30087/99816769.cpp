// 2025년 10월 30일 01:25:30
// 맞았습니다!!
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  vector<string> v(26);
  v[0] = "204";
  v[3] = "207";
  v[1] = "302";
  v[2] = "B101";
  v[13] = "303";
  v[18] = "501";
  v[19] = "105";
  int N;
  cin >> N;
  while (N--) {
    string s;
    cin >> s;
    cout << (s[0] == 'A' ? (s.size() == 9 ? v[0] : v[1]) : v[s[0] - 'A']) << '\n';
  }
}