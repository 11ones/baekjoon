// 2026년 3월 8일 23:42:11
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<vector<char>> v(16, vector<char>(16, 'X'));
  int N = 0;
  char c;
  for (int o = 1; o <= 14; ++o) {
    for (int i = -1; i < 2; ++i) {
      for (int j = -1; j < 2; ++j) {
        cin >> c;
        v[1 + i][o + j] = c;
        if (!i && j == 1 && c == 'R') N = o;
      }
    }
    cout << "? R\n" << flush;
    if (N) break;
  }
  for (int i = 3; i < N; i += 3) {
    for (int j = 0; j < 3; ++j) {
      for (int k = 0; k < 9; ++k) {
        cin >> c;
      }
      cout << "? D\n" << flush;
    }
    for (int j = 1; j <= N; ++j) {
      for (int x = -1; x < 2; ++x) {
        for (int y = -1; y < 2; ++y) {
          cin >> c;
          v[i + 1 + x][j + y] = c;
        }
      }
      cout << "? R\n" << flush;
    }
  }
  array<int, 2> a = {-1, -1};
  for (int i = 1; i <= N; ++i) {
    for (int j = 1; j <= N; ++j) {
      if (v[i][j] == 'G') a = {i, j};
    }
  }
  for (int i = -1; i < (N - 1) % 3; ++i) {
    for (int k = 0; k < 9; ++k) {
      cin >> c;
    }
    cout << "? D\n" << flush;
  }
  if (a[0] == -1) {
    for (int k = 0; k < 9; ++k) {
      cin >> c;
    }
    cout << "!" << flush;
  } else {
    for (int i = 1; i < a[1]; ++i) {
      for (int k = 0; k < 9; ++k) {
        cin >> c;
      }
      cout << "? R\n" << flush;
    }
    for (int i = 0; i < N; ++i) {
      for (int k = 0; k < 9; ++k) {
        cin >> c;
      }
      cout << "? D\n" << flush;
    }
    for (int i = -1; i < N - a[1]; ++i) {
      for (int k = 0; k < 9; ++k) {
        cin >> c;
      }
      cout << "? R\n" << flush;
    }
    for (int k = 0; k < 9; ++k) {
      cin >> c;
    }
    cout << "!" << flush;
  }
}