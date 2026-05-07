// 2024년 7월 20일 15:43:27
// 맞았습니다!!
// 2024KB
// 0ms
#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  string s, h, th;
  cin >> s;
  int sl = s.length();
  if (sl == 1) {
    cout << s;
    return 0;
  }
  h = s.substr(0, sl / 2);
  th = s.substr(0, (sl + 1) / 2);
  reverse(h.begin(), h.end());
  h = th + h;
  int t = stoi(th);
  if(h > s) {
    t--;
  }
  h = th;
  for(int i = 0; i < h.length(); i++) {
    h[i] = '9';
  }
  if(sl % 2) {
    h.pop_back();
  }
  cout << t + stoi(h);
}