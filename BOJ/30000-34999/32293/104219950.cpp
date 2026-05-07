// 2026년 3월 23일 15:29:05
// 맞았습니다!!
// 5992KB
// 24ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int T, N, l, c = 0;
  cin >> T;
  while (T--) {
    cin >> N;
    string S;
    vector<int> v;
    cin >> S;
    l = 0;
    for (int i = 0; i < N; ++i) {
      v.push_back(S[i] - 'A');
      ++l, c = 0;
      while (l > 2 && v[l - 3] + v[l - 2] * 2 + v[l - 1] * 4 == 6) v.pop_back(), v.pop_back(), v.pop_back(), v.push_back(1), ++c, l -= 2;
      while (c--) v.push_back(0), ++l;
    }
    for (int e : v) cout << (char)(e + 'A');
    cout << '\n';
  }
}