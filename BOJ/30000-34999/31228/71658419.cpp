// 2024년 1월 13일 15:06:30
// 틀렸습니다
// KB
// ms
#include <iostream>
#include <vector>
using namespace std;

typedef long long l;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  l n, m;
  cin >> n >> m;
  if (n - m < m) {
    m = n - m;
  }
  if (n % m == 0) {
    cout << "0";
  } else {
    cout << n * (m - 1);
  }
}