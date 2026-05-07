// 2024년 1월 13일 14:12:50
// 맞았습니다!!
// 2156KB
// 44ms
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  vector<int> v;
  v.push_back(1);

  for (int i = 2;; i++) {
    if (v.size() >= n) {
      break;
    }
    bool check = 0;
    for (auto elem : v) {
      if ((elem * i) % (elem + i) == 0) {
        check = 1;
        break;
      }
    }
    if (check == 0)
      v.push_back(i);
  }
  for (auto elem : v) {
    cout << elem << " ";
  }
}