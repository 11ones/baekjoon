// 2024년 1월 13일 14:37:53
// 시간 초과
// KB
// ms
#include <iostream>
#include <vector>
using namespace std;

typedef long long l;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  vector<l> v;
  v.push_back(0);
  bool check = 0;
  l x;
  cin >> x;
  v.push_back(x);
  for (int i = 1; i < n; i++) {
    cin >> x;
    v.push_back(x);
    if (v[v.size() - 1] < v[v.size() - 2]) {
      check = 1;
    }
  }
  if (check == 0) {
    cout << 1;
  } else {
    for (int i = 0; i < n; i++) {
      check = 0;
      v[0] = max(v[0], v[1]);
      for (int j = 1; j < v.size() - 1; j++) {
        v[j] = max(v[j], v[j + 1]);
        if (v[j] < v[j - 1]) {
          check = 1;
        }
      }
      v.pop_back();
      if (check == 0) {
        cout << i + 2;
        break;
      }
    }
  }
}