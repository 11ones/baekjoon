// 2025년 1월 8일 22:45:29
// 맞았습니다!!
// 2020KB
// 4ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, A = 0, B = 0;
  cin >> n;
  vector<int> a(n), b(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }
  for(auto e : a) {
    for(auto f : b) {
      if(e > f) A++;
      if(f > e) B++;
    }
  }
  cout << (A != B ? (A > B ? "first" : "second") : "tie");
}