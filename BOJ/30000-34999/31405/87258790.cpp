// 2024년 12월 7일 21:00:53
// 맞았습니다!!
// 11400KB
// 84ms
#include <bits/stdc++.h>
using namespace std;

typedef long double D;
typedef array<D, 2> A;

D S(A a, A b, A c) { return abs(a[0] * b[1] + b[0] * c[1] + c[0] * a[1] - b[0] * a[1] - c[0] * b[1] - a[0] * c[1]) / 2; }

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<A> v(n);
  vector<D> s(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i][0] >> v[i][1];
  }
  for (int i = 2; i < n; i++) {
    s[i] = s[i - 1] + S(v[0], v[i - 1], v[i]);
  }
  auto t = upper_bound(s.begin() + 2, s.end(), s[n - 1] / 2);
  int p = t - s.begin() - 1;
  cout << "YES\n1 0\n" << t - s.begin() << " ";
  cout << setprecision(13) << fixed;
  cout << (s[n - 1] / 2 - s[p]) / (s[p + 1] - s[p]);
}