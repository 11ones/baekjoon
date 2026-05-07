// 2024년 12월 7일 20:02:42
// 시간 초과
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

typedef array<double, 2> A;

double S(A a, A b, A c) { return abs(a[0] * b[1] + b[0] * c[1] + c[0] * a[1] - b[0] * a[1] - c[0] * b[1] - a[0] * c[1]) / 2; }


A F(A a, A l, A r, double ls, double rs) {
  A m = {(l[0] + r[0]) / 2, (l[1] + r[1]) / 2};
  double tls = S(a, l, m), trs = S(a, m, r);
  if (abs(tls + ls - trs - rs) < 1e-9) {
    return m;
  }
  if (tls + ls > trs + rs) {
    return F(a, l, m, ls, trs + rs);
  }
  return F(a, m, r, tls + ls, rs);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<array<long long, 2>> v(n);
  vector<long long> s(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i][0] >> v[i][1];
  }
  for (int i = 2; i < n; i++) {
    s[i] = s[i - 1] + abs(v[0][0] * v[i - 1][1] + v[i - 1][0] * v[i][1] + v[i][0] * v[0][1] - v[i - 1][0] * v[0][1] - v[i][0] * v[i - 1][1] - v[0][0] * v[i][1]) / 2;
  }
  auto t = upper_bound(s.begin() + 2, s.end(), s[n - 1] / 2);
  int p = t - s.begin() - 1;
  A f = F({(double)v[0][0], (double)v[0][1]}, {(double)v[p][0], (double)v[p][1]}, {(double)v[p + 1][0], (double)v[p + 1][1]}, *(t - 1), s.back() - *t);
  cout << setprecision(13) << fixed;
  cout << "YES\n1 0\n" << p + 1 << " " << (f[0] - v[p][0]) / (v[p + 1][0] - v[p][0]);
}