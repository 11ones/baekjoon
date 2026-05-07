#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  long N, D, mx = 0;
  cin >> N >> D;
  vector<array<long, 3>> v(N);
  map<long, long> A;
  vector<long> B(N), B2(N);
  for (auto &e : v) {
    cin >> e[0] >> e[1] >> e[2];
    if (e[0] <= D) mx = max(mx, e[1] + e[2]);
  }
  sort(v.begin(), v.end());
  A[v[0][0]] = v[0][1];
  B[0] = v[0][0];
  B2[0] = v[0][2];
  for (int i = 1; i < N; ++i) {
    A[v[i][0]] = max(A[v[i - 1][0]], v[i][1]);
    B[i] = v[i][0];
    B2[i] = max(B2[i - 1], v[i][2]);
  }
  for (auto [a, b] : A) {
    auto x = upper_bound(B.begin(), B.end(), D - a);
    if(x == B.begin()) break;
    --x;
    if (*(x) + a <= D) mx = max(mx, b + B2[x - B.begin()]);
  }
  cout << mx;
}