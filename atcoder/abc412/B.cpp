#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);

  string S, T;
  cin >> S >> T;
  for (int i = 1; i < S.size(); ++i) {
    if (S[i] >= 'A' && S[i] <= 'Z') {
      if (T.find(S[i - 1]) == T.npos) {
        cout << "No";
        return 0;
      }
    }
  }
  cout << "Yes";
}