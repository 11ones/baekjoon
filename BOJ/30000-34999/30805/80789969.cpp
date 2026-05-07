// 2024년 7월 9일 23:35:36
// 맞았습니다!!
// 2020KB
// 0ms
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int m;
  cin >> m;
  vector<int> b(m);
  for (int i = 0; i < m; i++) {
    cin >> b[i];
  }
  vector<int> v;
  auto ta = a.begin(), tb = b.begin();
  for (int i = 100; i > 0; i--) {
    auto tta = ta, ttb = tb;
    bool chka = 0, chkb = 0;
    while(tta != a.end()) {
      if(*tta == i) {
        chka = 1;
        break;
      }
      tta++;
    }
    while(ttb != b.end()) {
      if(*ttb == i) {
        chkb = 1;
        break;
      }
      ttb++;
    }
    if(chka && chkb) {
      v.push_back(i);
      ta = tta + 1;
      tb = ttb + 1;
      i++;
      continue;
    }
  }
  auto t = v.begin();
  vector<int> rv;
  while(1) {
    t = max_element(t, v.end());
    if(t == v.end()) {
      break;
    }
    rv.push_back(*t);
    t++;
  }
  cout << rv.size() << '\n';
  for(auto e : rv) {
    cout << e << ' ';
  }
}