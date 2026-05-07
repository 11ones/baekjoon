// 2024년 1월 13일 15:25:12
// 틀렸습니다
// KB
// ms
#include <iostream>
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
  if (n == m * 2) {
    cout << "1";
  } else if (n % m == 0) {
    cout << "0";
  } else {
    cout << n * (m - 1);
  }
}