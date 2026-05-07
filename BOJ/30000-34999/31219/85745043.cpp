// 2024년 10월 28일 23:23:43
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> P;

int c(P a, P b, P c) {
  int t = a.first * b.second + b.first * c.second + c.first * a.second - (a.second * b.first + b.second * c.first + c.second * a.first);
  if (t > 0) return 1;
  if (t == 0) return 0;
  return -1;
}

int n;
double mx = -2;
array<P, 10> a;
vector<P> v;

void f(double d) {
  if (v.size() == n) {
    for (int i = 2; i < v.size() - 1; i++) {
      if (c(v[i - 1], v[i], v.back()) * c(v[i - 1], v[i], v[0]) <= 0 && c(v.back(), v[0], v[i - 1]) * c(v.back(), v[0], v[i]) <= 0) return;
    }
    mx = max(mx, d + sqrt((v.back().first - v[0].first) * (v.back().first - v[0].first) + (v.back().second - v[0].second) * (v.back().second - v[0].second)));
    return;
  }
  for (int i = 0; i < n; i++) {
    if (v.empty()) {
      v.push_back(a[i]);
      f(d);
      v.pop_back();
      continue;
    }
    double td = sqrt((v.back().first - a[i].first) * (v.back().first - a[i].first) + (v.back().second - a[i].second) * (v.back().second - a[i].second));
    for (auto ee : v) {
      if (ee.first == a[i].first && ee.second == a[i].second) {
        goto E;
      }
    }
    for (int j = 1; j < v.size() - 1; j++) {
      if (c(v[j - 1], v[j], v.back()) * c(v[j - 1], v[j], a[i]) <= 0 && c(v.back(), a[i], v[j - 1]) * c(v.back(), a[i], v[j]) <= 0) goto E;
    }
    v.push_back(a[i]);
    f(d + td);
    v.pop_back();
  E:
    a;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i].first >> a[i].second;
  }
  f(0);
  if (mx < -1) {
      cout << -1;
  } else {
  cout << setprecision(7) << fixed << mx;
  }
}