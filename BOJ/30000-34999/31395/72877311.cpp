// 2024년 2월 3일 20:33:27
// 맞았습니다!!
// 2020KB
// 28ms
#include <iostream>

using namespace std;

int main() {

  ios::sync_with_stdio(false);

  cin.tie(NULL);

  long long n, x, ans = 1;

  cin >> n;

  cin >> x;

  int mx = x;

  long long cm = 1;

  for (int i = 1; i < n; i++) {

    ans++;

    cin >> x;

    if (mx < x) {

      cm++;

      mx = x;

    } else {

      if (cm >= 1) {

        ans += cm * (cm - 1) / 2;

      }

      mx = x;

      cm = 1;

    }

  }

  if (cm >= 1) {

    ans += cm * (cm - 1) / 2;

  }

  cout << ans;

}