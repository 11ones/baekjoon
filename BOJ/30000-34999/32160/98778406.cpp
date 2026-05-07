// 2025년 9월 22일 17:04:36
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N;
  cin >> N;
  vector<int> v(N);
  cout << (N % 4 < 2 ? N : N - 1) << '\n';
  for (int i = N - 2; i > 0; i -= 2) {
    cout << i + 1<< " " << i << '\n';
  }
  for (int i = 3; i < N; i += 4) {
    cout << "1 1\n";
  }
  for (int i = 8; i < N; i += 8) {
    cout << "0 0\n";
  }
  N % 4 < 2 ? cout << N << " 0" : cout << (N > 4 ? "0 1\n1 " : "1 ") << N;
}