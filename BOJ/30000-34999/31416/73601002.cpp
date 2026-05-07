// 2024년 2월 18일 14:03:18
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  for (int o = 0; o < t; o++) {
    int t1, t2, v1, v2;
    cin >> t1 >> t2 >> v1 >> v2;
    if (t1 * v1 < t2 * v2) {
      cout << t2 * v2 << "\n";
    } else {
      int tmp = v1 - (t2 * v2) / t1;
      if(tmp%2) {
        cout << t1 * (tmp / 2 + 1 + v1 - tmp) << '\n';
      } else {
        cout << t2 * v2 + tmp / 2 * t1 << '\n';
      }
    }
  }
}