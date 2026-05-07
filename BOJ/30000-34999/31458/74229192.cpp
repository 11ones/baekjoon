// 2024년 3월 1일 13:08:36
// 틀렸습니다
// KB
// ms
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin >> n;
  for(int o = 0; o < n; o++) {
    string s;
    cin >> s;
    int a = 0, b = 0, c = 0;
    bool check = 0;
    for(int i = 0; i < s.size(); i++) {
      if(!check && s[i] == '!') {
        a++;
      } else if(s[i] == '!') {
        c++;
      } else {
        b = s[i];
        check = 1;
      }
    }
    if((b - '0' == 0 && c == 0 && a % 2 == 0) || a % 2 == 1) {
      cout << 0 << '\n';
    } else {
      cout << 1 << '\n';
    }
  }
}