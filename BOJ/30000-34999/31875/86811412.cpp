// 2024년 11월 24일 18:59:40
// 시간 초과
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<string> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  int l = 0, r = 1, s = -1;
  for (int i = 0; i < n; i++) {
    for (int j = 1; i + j * 2 <= n; j++) {
      bool chk = 0;
      int tr = 1;
      for (int k = i + j; k + j - 1 < n; k += j) {
        for (int m = 0; m < j; m++) {
          if (v[i + m] != v[k + m]) {
            goto E;
          }
          chk = 1;
        }
        tr++;
      }
    E: 
      if (tr > r) {
        l = j;
        r = tr;
        s = i;
      }
      if (tr > 1 || chk) {
        goto F;
      }
    
    }
  F:
    if (i < s + l * (r - 1)) {
      i = s + l * (r - 1) - 1;
    }
  }
  if (s == -1) {
    cout << -1;
    return 0;
  }
  cout << l << " " << r << '\n';
  for (int i = s; i < s + l; i++) {
    cout << v[i] << " ";
  }
}