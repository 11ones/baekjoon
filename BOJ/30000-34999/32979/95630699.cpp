// 2025년 6월 24일 22:56:47
// 맞았습니다!!
// 2020KB
// 140ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, T, x;
  cin >> N >> T;
  queue<int> q;
  for(int i = 0; i < N * 2; ++i) {
    cin >> x;
    q.push(x);
  }
  for(int i = 0; i < T; ++i) {
    cin >> x;
    while(--x) {
      q.push(q.front());
      q.pop();
    }
    cout << q.front() << " ";
  }
}