// 2024년 7월 8일 12:09:02
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
#include <vector>
using namespace std;

int main() {

  int n;
  cin >> n;
  vector<int> v(6);
  for(int i = 0; i < 6; i++) {
    cin >> v[i];
  }
  int a, b;
  cin >> a >> b;
  int sum = 0;
  for(auto e : v) {
    sum += e / a + !!(e % a);
  }
  cout << sum << '\n' << n / b << " " << n % b;
}