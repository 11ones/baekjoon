// 2024년 7월 20일 15:26:30
// 틀렸습니다
// KB
// ms
#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  string s, h, th;
  cin >> s;
  if(s.length() == 1) {
    cout << s;
    return 0;
  }
  h = s.substr(0, s.length() / 2);
  th = s.substr(0, (s.length() + 1) / 2);
  reverse(h.begin(), h.end());
  h = th + h;
  if(h <= s) {
    cout << stoi(th) + 9;
  } else {
    cout << stoi(th) + 8;
  }
}