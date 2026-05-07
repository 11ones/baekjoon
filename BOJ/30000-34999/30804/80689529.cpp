// 2024년 7월 8일 12:16:46
// 맞았습니다!!
// 2804KB
// 52ms
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<int> v(n);
  for(int i = 0; i < n; i++) {
    cin >> v[i];
  }
  int mx = 0;
  for(int i = 1; i <= 9; i++) {
    for(int j = 1; j <= 9; j++) {
      int t = 0;
      for(auto e : v) {
        if(e == i || e == j) {
          t++;
          continue;
        }
        mx = max(mx, t);
        t = 0;
      }
      mx = max(mx, t);
    }
  }
  cout << mx;
}