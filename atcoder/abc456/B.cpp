#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  int x;
  vector<array<int, 3>> v(3);
  vector<int> t = {0, 1, 2};
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 6; ++j) {
      cin >> x;
      if (x > 3) ++v[i][x - 4];
    }
  }
  int c = 0;
  do {
    c += v[0][t[0]] * v[1][t[1]] * v[2][t[2]];
  } while (next_permutation(t.begin(), t.end()));
  cout << (double)c / 216;
}