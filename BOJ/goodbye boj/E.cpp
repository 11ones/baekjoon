#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  long T, N, c;
  cin >> T;
  while (T--) {
    c = 0;
    cin >> N;
    vector<long> v(N);
    map<long, vector<long>> m;
    for (int i = 0; i < N; ++i) {
      cin >> v[i];
      m[v[i]].push_back(i);
    }
    set<long> s;
    tree<long, null_type, less<long>, rb_tree_tag, tree_order_statistics_node_update> u;
    for (int i = N; i > 0; --i) {
      for (auto &e : m[i]) {
        s.insert(e);
      }
      if (s.empty()) {
        cout << "-1\n";
        goto E;
      }
      long t = *--s.end();
      s.erase(t), u.insert(t);
      c += i - t - 1 + u.order_of_key(t);
    }
    cout << c << '\n';
  E:;
  }
}