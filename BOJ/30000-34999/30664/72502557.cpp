// 2024년 1월 28일 15:36:39
// 맞았습니다!!
// 2024KB
// 0ms
#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  while (1) {
    string s;
    cin >> s;
    if (s == "0")
      break;
    int sum = 0;
    for (auto elem : s) {
      sum += elem - '0';
    }
    while (s.size() % 6 != 0) {
      s = "0" + s;
    }
    int a = 0, b = 0, c = 0;
    int p = s.size() - 1;
    while (p > 0) {
      a += (s[p - 5] - '0') * 10 + (s[p - 4] - '0');
      b += (s[p - 3] - '0') * 10 + (s[p - 2] - '0');
      c += (s[p - 1] - '0') * 10 + (s[p] - '0');
      a %= 7;
      b %= 7;
      c %= 7;
      p -= 6;
    }
    a = (b * 9 - a * 10 + c) % 7;
    if (!(s[s.size() - 1] % 2 || sum % 3 || a % 7)) {
      cout << "PREMIADO\n";
    } else {
      cout << "TENTE NOVAMENTE\n";
    }
  }
}