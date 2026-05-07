// 2025년 5월 22일 01:23:19
// 맞았습니다!!
// 5180KB
// 272ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, x, K;
  cin >> N;
  vector<vector<array<int, 2>>> v(N + 1, vector<array<int, 2>>(N + 1));
  for (int i = 1; i <= N; ++i) {
    for (int j = 1; j <= N; ++j) {
      cin >> x;
      v[i][j][0] = v[i - 1][j][0] + v[i][j - 1][0] - v[i - 1][j - 1][0] + x;
      v[i][j][1] = v[i - 1][j][1] + v[i][j - 1][1] - v[i - 1][j - 1][1] + !x;
    }
  }
  cin >> K;
  vector<int> d(K);
  for (int &e : d) cin >> e;
  sort(d.begin(), d.end(), greater<>());
  for (int i = 1; i < K; ++i) {
    d[i] += d[i - 1];
  }
  d.insert(d.begin(), 0);
  int mx = 0;
  for (int i = 1; i <= N; ++i) {
    for (int j = 1; j <= N; ++j) {
      for (int k = 1; k <= min(i, j); ++k) {
        int a = v[i][j][0] - v[i][j - k][0] - v[i - k][j][0] + v[i - k][j - k][0];
        int b = v[i][j][1] - v[i][j - k][1] - v[i - k][j][1] + v[i - k][j - k][1];
        if (b <= K) {
          mx = max(mx, a + d[b]);
        }
      }
    }
  }
  cout << mx;
}