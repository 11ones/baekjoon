// 2024년 9월 18일 14:36:57
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, k, f, t = 0;
  cin >> n >> k;
  vector<int> v(n);
  for (int i = 0; i < n; i++) cin >> v[i];
  f = v[0];
  for (int i = 0; i < n; i++) {
    if (f + k * i < v[i]) {
      t += i * (v[i] - (f + k * i));
      f += v[i] - (f + k * i);
    }
    t += f + k * i - v[i];
  }
  cout << t;
}