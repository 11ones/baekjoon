// 2024년 2월 3일 13:12:19
// 틀렸습니다
// KB
// ms
#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n, x, ans = 1;
  cin >> n;
  cin >> x;
  int mx = x;
  int cm = 1;
  for(int i = 1; i < n; i++) {
    ans++;
    cin >> x;
    if(mx < x) {
      cm++;
      mx = x;
    } else {
      if(cm >= 1) {
      ans += cm * (cm - 1) / 2;
      }
      mx = x;
      cm = 1;
    }
  }
  cout << ans;
}