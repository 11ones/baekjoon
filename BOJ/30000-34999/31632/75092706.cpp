// 2024년 3월 16일 21:14:32
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
    int t2[3] = {0, 0, 0};
    int w = 0;
    int n;
    bool isD = 0;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    bool check = 1;
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
        check = 0;
        break;
      }
    }
    for (int i = 0; i < n; i++) {
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
      switch (s2[i]) {
      case 'W':
        t2[0]++;
        break;
      case 'L':
        t2[1]++;
        break;
      case 'D':
        t2[2]++;
      }
    }
    int cnt[3] = {0, 0, 0};
    int cnt2[3] = {0, 0, 0};
    for (int i = 0; i < 3; i++) {
      if (t[i] == 0) {
        cnt[i] = 1;
      }
      if (t2[i] == 0) {
        cnt2[i] = 1;
      }
    }
    if (t2[0] == n || t2[1] == n) {
      cout << "NO\n";
      continue;
    }
    if (t2[2] == n) {
      if (cnt[0] + cnt[1] + cnt[2] >= 2) {
        cout << "YES\n";
        for (int i = 0; i < n; i++) {
          cout << c[w];
        }
        cout << '\n';
        continue;
      }
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
      continue;
    }
    if (cnt2[0] && cnt2[2] || cnt2[1] && cnt2[2]) {
      cout << "NO\n";
      continue;
    }
    for (int i = 0; i < n; i++) {
      if (s1[i] == '?') {
        if (s2[i] == 'W') {
          s1[i] = c[w];
          continue;
        }
        s1[i] = c[(w + 1) % 3];
        continue;
      }
      if (!(s2[i] == 'W' && s1[i] == c[w]) &&
          !(s2[i] == 'L' && s1[i] == c[(w + 1) % 3])) {
        isD = 1;
      }
    }
    if (isD) {
      cout << "NO\n";
    } else {
      cout << "YES\n" << s1 << '\n';
    }
  }
}