// 2024년 12월 7일 19:40:00
// 시간 초과
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

typedef array<double, 2> A;

double S(A a, A b, A c) { return abs(a[0] * b[1] + b[0] * c[1] + c[0] * a[1] - b[0] * a[1] - c[0] * b[1] - a[0] * c[1]) / 2; }
A F(A &a, A l, A r, double ls, double rs) {
  A m = {(l[0] + r[0]) / 2, (l[1] + r[1]) / 2};
  double tls = S(a, l, m), trs = S(a, m, r);
  if (abs(tls + ls - trs - rs) < 1e-7) {
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
  vector<A> v(n);
  vector<double> s(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i][0] >> v[i][1];
  }
  for (int i = 2; i < n; i++) {
    s[i] = s[i - 1] + S(v[0], v[i - 1], v[i]);
  }
  auto t = upper_bound(s.begin() + 2, s.end(), s[n - 1] / 2);
  A f = F(v[0], v[t - s.begin() - 1], v[t - s.begin()], *(t - 1), s.back() - *t);
  cout << setprecision(13) << fixed;
  cout << "YES\n1 0\n" << t - s.begin() << " " << (f[0] - v[t - s.begin() - 1][0]) / (v[t - s.begin()][0] - v[t - s.begin() - 1][0]);
}