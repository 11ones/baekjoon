// 2024년 2월 18일 12:44:17
// 틀렸습니다
// KB
// ms
#include <iostream>
#define D 998'244'353;
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int ans = 1;
  int w, h, k, t;
  cin >> w >> h >> k >> t;
  for(int i = 0; i < k; i++) {
    int a, b;
    cin >> a >> b;
    int tw = 0, th = 0;
    a - t >= 0 ? tw = a - t : tw = 0;
    a + t < w ? tw = a + t - tw : tw = w - tw;
    b - t >= 0 ? th = b - t : th = 0;
    b + t < h ? th = b + t - th + 1 : th = h - th + 1;
    ans = (ans * tw * th) % D;
  }
  cout << ans;
}