// 2025년 9월 25일 01:06:45
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, s = 0;
  cin >> N;
  vector<int> v(N);
  for (int &e : v) cin >> e, s += e;
  for (int e : v)
    if (e > s / 3 * 2) {
      s -= e;
      s *= 3;
      break;
    }
  cout << s / 3;
}