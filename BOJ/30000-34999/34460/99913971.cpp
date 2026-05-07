// 2025년 11월 3일 01:18:28
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int T;
  cin >> T;
  while (T--) {
    int N;
    string S;
    cin >> N >> S;
    int p = 0;
    while (p < N) {
      if (S[p] != 'M') {
        cout << "NO\n";
        goto E;
      }
      ++p;
      while (p < N && S[p] == 'I' && S[p + 1] == 'T') {
        p += 2;
      }
    }
    cout << (S.substr(N - 2) == "IT" ? "YES\n" : "NO\n");
  E:;
  }
}