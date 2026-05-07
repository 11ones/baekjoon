// 2025년 9월 15일 16:13:20
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<array<int, 2>> v(N);
  for(int i = 0; i < N; ++i) {
    cin >> v[i][0];
    v[i][1] = i + 1;
  }
  sort(v.begin(), v.end(), greater<>());
  int s = v[0][0], mx = 0, p = 0;
  for(int i = 0; i < N; ++i) {
    s += v[i][0];
    if(mx < s + v[i][0]) {
      mx = s + v[i][0];
      p = i;
    }
  }
  cout << p + 1 << '\n';
  for(int i = 0; i <= p; ++i) {
    cout << v[i][1] << " ";
  }
}