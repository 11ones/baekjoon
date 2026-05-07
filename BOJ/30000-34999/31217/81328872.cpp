// 2024년 7월 20일 15:01:33
// 맞았습니다!!
// 8588KB
// 68ms
#include <iostream>
#include <vector>
#define MOD 1'000'000'007
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n, m;
  cin >> n >> m;
  vector<int> *v = new vector<int>[n];
  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    v[a - 1].push_back(b - 1);
    v[b - 1].push_back(a - 1);
  }
  long long cnt = 0;
  for (int i = 0; i < n; i++) {
    long long l = v[i].size();
    if (l > 2) {
      cnt = (cnt + l * (l - 1) * (l - 2) / 6) % MOD;
    }
  }
  cout << cnt;
}