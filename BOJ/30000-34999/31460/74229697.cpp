// 2024년 3월 1일 13:17:43
// 틀렸습니다
// KB
// ms
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
      cout << "-1";
    } else if (x % 2 == 0) {
      cout << 1;
      for (int i = 2; i < x; i++) {
        cout << 0;
      }
      cout << 1;
    } else {
      for (int i = 0; i < x / 2; i++) {
        cout << 1;
      }
      cout << 0;
      for (int i = 0; i < x / 2; i++) {
        cout << 1;
      }
    }
    cout << '\n';
  }
}