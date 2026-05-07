// 2024년 6월 16일 18:20:06
// 맞았습니다!!
// 2808KB
// 36ms
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
typedef pair<int, int> p;

bool cmp(p a, p b) { return abs(a.first - a.second) > abs(b.first - b.second); }

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, a, b;
  cin >> n >> a >> b;
  vector<p> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i].first >> v[i].second;
  }
  sort(v.begin(), v.end(), cmp);
  long long ta, tb, sum;
  ta = tb = sum = 0;
  for (auto e : v) {
    if(ta == a) {
      sum += e.second;
      continue;
    }
    if(tb == b) {
      sum += e.first;
      continue;
    }
    if(e.first > e.second) {
      sum += e.second;
      tb++;
    } else {
      sum += e.first;
      ta++;
    }
  }
  cout << sum;
}