// 2024년 2월 24일 19:26:32
// 틀렸습니다
// KB
// ms
#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
typedef long long ll;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  int l = 0;
  vector<string> v;
  string t;
  int is_even = -1;
  int is_odd = -1;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (x % 2 == 0) {
      is_even = x;
    } else {
      is_odd = x;
    }
    v.push_back(to_string(x));
  }
  if (is_even != -1) {
    cout << is_odd * 10 + is_even;
  }
  sort(v.begin(), v.end());
  l = v.size();
  queue<string> q;
  q.push(v[0]);
  //while (!q.empty()) {
    
 // }
}