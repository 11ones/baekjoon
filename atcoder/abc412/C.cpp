#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int T;
  cin >> T;
  while (T--) {
    int N;
    cin >> N;
    vector<int> v(N);
    for (auto &e : v) cin >> e;
    sort(++v.begin(), --v.end());
    for (int i = 1; i < N; ++i) {
      if (v[0] * 2 >= v[N - 1]) {
        cout << i + 1 << '\n';
        break;
      }
      auto t = --upper_bound(++v.begin(), --v.end(), v[0] * 2);
      if (*t == v[0]) {
        cout << -1 << '\n';
        break;
      }
      v[0] =*t;
    }
  }
}