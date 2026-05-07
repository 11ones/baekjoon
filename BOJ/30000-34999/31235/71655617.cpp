// 2024년 1월 13일 14:24:30
// 틀렸습니다
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
  for (int i = 1; i < n; i++) {
    l x;
    cin >> x;
    v.push_back(x + v.back());
  }
  bool check = 0;
  for (int i = 1; i < v.size(); i++) {
    check = 0;
    for (int j = i + 1; j < v.size(); j++) {
      if ((v[j] - v[j - i]) <= (v[j - 1] - v[j - i - 1])) {
        check = 1;
        break;
      }
    }
    if (check == 0) {
      cout << i;
      break;
    }
  }
  if (check == 1) {
    cout << n;
  }
}