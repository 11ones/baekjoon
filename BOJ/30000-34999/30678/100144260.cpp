// 2025년 11월 11일 14:13:52
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

string a[5] = {"  *  ", "  *  ", "*****", " *** ", " * * "};
vector<string> v(3125);
int s[6] = {1, 5, 25, 125, 625, 3125};
void f(int d, int y, bool t) {
  for (int i = 0; i < 5; ++i) for (int j = 0; j < 5; ++j) {
      d ? f(d - 1, y + i * s[d], a[i][j] == '*' ? 1 : 0) : v[y + i].push_back(t ? a[i][j] : ' ');
    }
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N;
  cin >> N;
  if(!N) {
    cout << "*";
    return 0;
  }
  f(N - 1, 0, 1);
  for (int i = 0; i < s[N]; ++i) cout << v[i] << '\n';
}