#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N, Q;
  cin >> N >> Q;
  vector<string> S;
  vector<array<int, 2>> v(N + 1, {-1, -1});
  vector<int> E;
  while (Q--) {
    int x, p;
    string s;
    cin >> x >> p;
    if (x == 1) {
      v[p] = v[0];
    }
    if (x == 2) {
      cin >> s;
      if(v[p][0] == -1) {
        v[p] = {(int)S.size(), (int)S.size()};
        E.push_back(-1);
      } else {
        E.push_back(v[p][1]);
        v[p][1] = S.size();
      }
      S.push_back(s);
    }
    if (x == 3) {
      v[0] = v[p];
    }
  }
  int p = v[0][1];
  stack<string> s;
  while(p != -1) {
    s.push(S[p]);
    if (p == v[0][0]) break;
    p = E[p];
  }
  while(!s.empty()) {
    cout << s.top();
    s.pop();
  }
}