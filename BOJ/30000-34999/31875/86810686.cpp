// 2024년 11월 24일 18:32:58
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
    for (int j = 1; i + j < n; j++) {
      int tr = 1;
      unordered_map<string, int> t;
      for(int k = i; k < i + j; k++) {
        if(t[v[k]]) {
          goto F;
        }
        t[v[k]]++;
      }
      for (int k = i + j; k + j - 1 < n; k += j) {
        for (int m = 0; m < j; m++) {
          if (v[i + m] != v[k + m]) {
            goto E;
          }
        }
        tr++;
      }
    E:
      if (tr > r) {
        l = j;
        r = tr;
        s = i;
      }
    }
    F:
    if (i < s + l * r) {
      i = s + l * r;
    }
  }
  if(s == -1) {
    cout << -1;
    return 0;
  }
  cout << l << " " << r << '\n';
  for(int i = s; i < s + l; i++) {
    cout << v[i] << " ";
  }
}