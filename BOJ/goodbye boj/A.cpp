#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N;
  cin >> N;
  vector<vector<char>> v(N * 2, vector<char>(N * 4 + 2, ' '));
  for (int i = 0; i < N * 2; ++i) {
    v[2 * N - i - 1][i] = '*';
  }
  for (int i = 0; i < N; ++i) {
    v[i][3 * N - i] = '*';
    v[i][3 * N + 2 + i] = '*';
    v[N + i][4 * N + 1 - i] = '*';
    v[N + i][2 * N + 1 + i] = '*';
  }
  for (auto e : v) {
    for (auto f : e) {
      cout << f;
    }
    cout << '\n';
  }
}