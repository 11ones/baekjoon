// 2024년 3월 16일 19:11:39
// 맞았습니다!!
// 2024KB
// 0ms
#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
typedef pair<int, int> p;
typedef long long l;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string s[10][10];
  for(int i = 0; i < 10; i++) {
    for(int j = 0; j < 10; j++) {
      cin >> s[i][j];
    }
  }
  bool check = 0;
  for(int i = 0; i < 10; i++) {
    bool t = 1;
    for(int j = 0; j < 10; j++) {
      if(s[i][j] != s[i][0]) {
        t = 0;
        break;
      }
    }
    if(t) {
      check = 1;
      break;
    }
    t = 1;
    for(int j = 0; j < 10; j++) {
      if(s[j][i] != s[0][i]) {
        t = 0;
        break;
      }
    }
    if(t) {
      check = 1;
      break;
    }
  }
  if(check) {
    cout << 1;
  } else {
    cout << 0;
  }
}