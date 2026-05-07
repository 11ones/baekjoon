// 2024년 3월 1일 13:45:54
// 맞았습니다!!
// 124092KB
// 272ms
#include <iostream>
#include <vector>
using namespace std;

char arr[5000][5000];
int vst[5000][5000];

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      cin >> arr[i][j];
    }
  }
  bool check = 1;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      if (arr[i][j] == 'R' && vst[i][j] == 0) {
        if (arr[i + 1][j] == 'R' && arr[i + 1][j + 1] == 'R' &&
            vst[i + 1][j] == 0 && vst[i + 1][j + 1] == 0) {
          vst[i][j] = 1;
          vst[i + 1][j] = 1;
          vst[i + 1][j + 1] = 1;
        } else {
          check = 0;
          break;
        }
      }
      if (arr[i][j] == 'B' && vst[i][j] == 0) {
        if (arr[i][j + 1] == 'B' && arr[i + 1][j + 1] == 'B' &&
            vst[i][j + 1] == 0 && vst[i + 1][j + 1] == 0) {
          vst[i][j] = 1;
          vst[i][j + 1] = 1;
          vst[i + 1][j + 1] = 1;
        } else {
          check = 0;
          break;
        }
      }
    }
    if (!check) {
      break;
    }
  }
  cout << check;
}