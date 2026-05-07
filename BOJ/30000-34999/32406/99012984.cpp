// 2025년 9월 29일 18:39:15
// 맞았습니다!!
// 3588KB
// 28ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N, mn = 0, mx = 0;
  cin >> N;
  vector<int> A(N), B(N);
  for(int &e : A) cin >> e;
  for(int &e : B) cin >> e;
  for(int i = 0; i < N - 2; ++i) {
    mn += min(A[i], B[i]);
    mx += max(A[i], B[i]);
  }
  cout << abs(A[N - 1] + B[N - 2] - A[N - 2] - B[N - 1]) + mx - mn;
}