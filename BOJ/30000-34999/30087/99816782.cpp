// 2025년 10월 30일 01:26:38
// 맞았습니다!!
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  array<string, 26> v = {"204","302","B101", "207"};
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