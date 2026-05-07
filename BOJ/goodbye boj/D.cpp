#include <bits/stdc++.h>
using namespace std;

long find(vector<long> &u, long x) {
  return u[x] = u[x] == x ? x : find(u, u[x]);
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  long N, M;
  cin >> N >> M;
  vector<array<long, 4>> v(M);
  vector<long> u1(N), u2(N), tv(M), r(N);
  for (int i = 0; i < M; ++i) {
    cin >> v[i][1] >> v[i][2] >> v[i][0];
    --v[i][1], --v[i][2];
    v[i][3] = i + 1;
    tv[i] = v[i][0];
  }
  sort(v.begin(), v.end());
  sort(tv.begin(), tv.end());
  cout << "NO\n";
  long mxu1 = 0, cu1 = 0, cu2 = 0;
  for (int i = 0; i < N; ++i) u1[i] = u2[i] = i;
  for (int i = 0; i < M; ++i) {
    long x = find(u1, v[i][1]);
    long y = find(u1, v[i][2]);
    if (x != y) {
      u1[y] = x;
      mxu1 = max(mxu1, v[i][0]);
      cu1 += v[i][0];
    }
  }
  for (int i = upper_bound(tv.begin(), tv.end(), mxu1) - tv.begin() - 1; i >= 0;
       --i) {
    long x = find(u2, v[i][1]);
    long y = find(u2, v[i][2]);
    if (x != y) {
      u2[y] = x;
      r.push_back(v[i][3]);
      cu2 += v[i][0];
    } 
  }
  if (cu1 != cu2) {
    cout << "YES\n";
    for (auto e : r) cout << e << "\n";
    return 0;
  }
  cout << "NO\n";
}