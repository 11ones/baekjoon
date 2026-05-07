// 2025년 4월 28일 14:54:13
// 틀렸습니다
// KB
// ms
#include<bits/stdc++.h>
using namespace std;

int main() {
  int n, m, t = 0;
  cin >> n >> m;
  for(int i = 1; i <= n; ++i) {
    for(int j = 1; j <= m; ++j) {
      cout << "? " << i << " " << j << endl;
      cin >> t;
      if(t) return 0;
    }
  }
}