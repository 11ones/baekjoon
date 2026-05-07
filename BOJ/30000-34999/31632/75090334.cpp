// 2024년 3월 16일 20:32:51
// 틀렸습니다
// KB
// ms
#include <iostream>
#include <queue>
using namespace std;

enum s { G, O, D };

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int tc;
  cin >> tc;
  for (int o = 0; o < tc; o++) {
    char c[3] = {'G', 'O', 'D'};
    int t[4] = {0, 0, 0, 0};
    int w = 0;
    int n;
    bool isD = 0;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    for (int i = 0; i < n; i++) {
      if (s1[i] != '?') {
        switch (s1[i]) {
        case 'G':
          w = G;
          break;
        case 'O':
          w = O;
          break;
        case 'D':
          w = D;
        }
        if (s2[i] == 'L') {
          w = (w + 2) % 3;
        }
        if (s2[i] == 'D') {
          isD = 1;
        }
        break;
      }
    }
    if (isD) {
      for (int i = 0; i < n; i++) {
        if (s2[i] != 'D') {
          isD = 0;
        }
        switch (s1[i]) {
        case 'G':
          t[G]++;
          break;
        case 'O':
          t[O]++;
          break;
        case 'D':
          t[D]++;
          break;
        case '?':
          t[3]++;
          break;
        }
      }
      int cnt[3] = {0, 0, 0};
      for (int i = 0; i < 3; i++) {
        if (t[i] == 0) {
          cnt[i] = 1;
        }
      }
      if (cnt[0] + cnt[1] + cnt[2] == 2) {
        cout << "YES\n";
        for (int i = 0; i < n; i++) {
          cout << c[w];
        }
        cout << '\n';
      } else if (isD) {
        cout << "YES\n";
        for (int i = 0; i < n; i++) {
          if (s1[i] != '?') {
            cout << s1[i];
          } else {
            if (cnt[0] == 1) {
              cout << 'G';
              cnt[0] = 0;
            } else if (cnt[1] == 1) {
              cout << 'O';
              cnt[1] = 0;
            } else {
              cout << 'D';
            }
          }
        }
        cout << '\n';
      } else {
        cout << "NO\n";
      }
    } else {
      for (int i = 0; i < n; i++) {
        if (s2[i] == 'D') {
          isD = 1;
        }
        if (s1[i] == '?') {
          if (s2[i] == 'W') {
            s1[i] = c[w];
          } else {
            s1[i] = c[(w + 1) % 3];
          }
        } else {
          if (!(s2[i] == 'W' && s1[i] == c[w]) &&
              !(s2[i] == 'L' && s1[i] == c[(w + 1) % 3])) {
            isD = 1;
          }
        }
      }
      if (isD) {
        cout << "NO\n";
      } else {
        cout << "YES\n" << s1 << '\n';
      }
    }
  }
}