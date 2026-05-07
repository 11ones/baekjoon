#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  vector<int> v(1e7);
  for (int i = 2; i < 1e7; ++i) {
    if (v[i]) continue;
    for (int j = i + i; j < 1e7; j += i) {
      v[j] = 1;
    }
  }
  vector<long> p;
  for (int i = 2; i < 1e7; ++i)
    if (!v[i]) p.push_back(i);

  long L, R, c = 0;
  cin >> L >> R;

  vector<long> x(R - L + 1, 1);

  for (auto e : p) {
    for (long i = L / e * e; i <= R; i += e) {
      if (i < L) continue;
      x[i - L] = 0;
    }
    __int128_t t = e;
    while (t <= R) {
      if (t >= L) x[t - L] = 1;
      t *= e;
    }
  }
  x[0] = 1;
  for (auto e : x) c += e;
  cout << c;
}