// 2024년 2월 18일 12:07:41
// 틀렸습니다
// KB
// ms
#include <iostream>
#include <vector>
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
      cout << t2 * v2 + t1 * (v1 - (t2 * v2) / t1) / 2 << '\n';
    }
  }
}