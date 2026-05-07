#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N, Q, x, c = 0;
  cin >> N >> Q;
  vector<int> v(N + 2);
  while (Q--) {
    cin >> x;
    if (v[x]) {
      if (v[x - 1] && v[x + 1]) ++c;
      if (!v[x - 1] && !v[x + 1]) --c;
    } else {
      if (v[x - 1] && v[x + 1]) --c;
      if (!v[x - 1] && !v[x + 1]) ++c;
    }
    v[x] = !v[x];
    cout << c << '\n';
  }
}