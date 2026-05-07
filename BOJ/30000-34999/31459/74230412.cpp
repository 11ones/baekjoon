// 2024년 3월 1일 13:32:00
// 맞았습니다!!
// 4132KB
// 4ms
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  for (int o = 0; o < t; o++) {
    int w, h, x, y;
    cin >> w >> h >> x >> y;
    bool **arr = new bool *[h];
    for (int i = 0; i < h; i++) {
      arr[i] = new bool[w]{};
    }
    int ans = 0;
    for (int i = 0; i < h; i++) {
      for (int j = 0; j < w; j++) {
        int tx = j + x;
        int ty = i + y;
        if (tx >= w || tx < 0 || ty >= h || ty < 0) {
          if (arr[i][j] == 0) {
            arr[i][j] = 1;
            ans++;
          }
        } else {
          if (arr[i][j] == 0 && arr[ty][tx] == 0) {
            arr[i][j] = 1;
            arr[ty][tx] = 1;
            ans++;
          }
        }
      }
    }
    cout << ans << '\n';
  }
}