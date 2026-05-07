// 2024년 2월 3일 13:07:37
// 틀렸습니다
// KB
// ms
#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n, x, ans = 0;
  cin >> n;
  int mx = 0;
  int cm = 0;
  for(int i = 0; i < n; i++) {
    ans++;
    cin >> x;
    if(mx < x) {
      cm++;
      mx = x;
    } else {
      if(cm > 1) {
      ans += cm * (cm - 1) / 2;
      }
      mx = 0;
      cm = 0;
    }
  }
  cout << ans;
}