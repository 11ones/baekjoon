// 2024년 2월 18일 13:44:32
// 맞았습니다!!
// 2020KB
// 200ms
#include <iostream>
#define D 998'244'353
using namespace std;
typedef long long l;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  l ans = 1;
  l w, h, k, t;
  cin >> w >> h >> k >> t;
  for (int i = 0; i < k; i++) {
    l a, b;
    cin >> a >> b;
    l tw = 0, th = 0;
    a - t > 0 ? tw = a - t : tw = 1;
    a + t <= w ? tw = a + t - tw + 1 : tw = w - tw + 1;
    b - t > 0 ? th = b - t : th = 1;
    b + t <= h ? th = b + t - th + 1 : th = h - th + 1;
    l tmp = (tw * th) % D;
    ans = (ans * tmp) % D;
  }
  cout << ans;
}