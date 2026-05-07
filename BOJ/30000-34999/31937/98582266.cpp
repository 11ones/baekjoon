// 2025년 9월 16일 22:25:47
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M, K, x, y, z;
  cin >> N >> M >> K;
  map<int, int> m;
  while(K--) {
    cin >> x;
    m[x] = 1;
  }
  vector<array<int, 3>> t;
  while(M--) {
    cin >> x >> y >> z;
    if(m[y] + m[z] == 2) t.push_back({x, y, z});
  }
  sort(t.begin(), t.end());
  cout << t[0][1];
}