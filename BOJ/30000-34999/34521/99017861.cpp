// 2025년 9월 29일 21:13:16
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> v;
  for (int i = 3; i * i < 10'000'000; i+=2) {
    v.push_back(i * i);
  }
  int T, N;
  cin >> T;
  while (T--) {
    cin >> N;
    vector<int> r(N + 1);
    r[1] = 1;
    r[2] = 2;
    auto t = v.begin();
    for (int i = 3; i <= N; ++i) {
      r[i] = i;
      if(*t / 2 == i) {
        swap(r[i - 1], r[i]);
      }
    }
    for(int i = 1; i <= N; ++i) cout << r[i] << " ";
    cout << '\n';
  }
}