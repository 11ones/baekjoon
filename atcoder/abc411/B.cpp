#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int N, x;
  cin >> N;
  vector<int> v = {0};
  for (int i = 1; i < N; ++i){
    cin >> x;
    v.push_back(x);
    v[i] += v[i - 1];
  }
  for (int i = 0; i < N; ++i) {
    for (int j = i + 1; j < N; ++j) {
      cout << v[j] - v[i] << " ";
    }
    cout << '\n';
  }
}