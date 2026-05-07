// 2024년 2월 3일 13:01:59
// 맞았습니다!!
// 2024KB
// 0ms
#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  string a, b, c;
  cin >> a >> b >> c;
  cout << stoi(a) + stoi(b) - stoi(c) << '\n';
  cout << stoi(a + b) - stoi(c);
}