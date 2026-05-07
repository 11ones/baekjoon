// 2024년 3월 1일 13:21:51
// 맞았습니다!!
// 2020KB
// 32ms
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin >> n;
  for (int o = 0; o < n; o++) {
    int x;
    cin >> x;
    if (x == 1) {
      cout << 0;
    } else if (x == 3) {
      cout << 121;
    } else if (x % 2 == 0) {
      cout << 1;
      for (int i = 2; i < x; i++) {
        cout << 0;
      }
      cout << 1;
    } else {
      cout << 11;
      for (int i = 4; i < x; i++) {
        cout << 0;
      }
      cout << 11;
    }
    cout << '\n';
  }
}