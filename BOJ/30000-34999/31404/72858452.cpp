// 2024년 2월 3일 14:41:03
// 틀렸습니다
// KB
// ms
#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int h, w;
  cin >> h >> w;
  int r, c, d;
  cin >> r >> c >> d;

  int **A = new int *[h];
  int **B = new int *[h];
  int **vst = new int *[h];
  for (int i = 0; i < h; i++) {
    A[i] = new int[w];
    B[i] = new int[w];
    vst[i] = new int[w];
  }
  char t;
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> t;
      A[i][j] = t - '0';
    }
  }
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cin >> t;
      B[i][j] = t - '0';
    }
  }
  long long cm = 1;
  long long lcm = 1, lr = r, lc = c, ld = d, tc = 0;
  while (1) {
    if (vst[r][c] == 0) {
      d = (d + A[r][c]) % 4;
    } else {
      d = (d + B[r][c]) % 4;
    }
    vst[r][c] = 1;
    switch (d) {
    case 0:
      r--;
      break;
    case 1:
      c++;
      break;
    case 2:
      r++;
      break;
    case 3:
      c--;
    }
    if ((lr == r && lc == c && ld == d) || r < 0 || r >= h || c < 0 || c >= w) {
      break;
    }
    if(tc == 1) {
      lcm = cm, lr = r, lc = c, ld = d;
      tc = 0;
    }
    cm++;
    if (vst[r][c] == 0) {
      tc = 1;
    }
  }
  cout << lcm;
}