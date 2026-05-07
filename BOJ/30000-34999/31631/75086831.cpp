// 2024년 3월 16일 19:26:37
// 틀렸습니다
// KB
// ms
#include <iostream>
#include <queue>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  deque<int> d;
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    if (i % 2) {
      d.push_front(i);
    } else {
      d.push_back(i);
    }
  }
  for (auto e : d) {
    cout << e << " ";
  }
}