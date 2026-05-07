// 2025년 5월 10일 18:45:16
// 맞았습니다!!
// 5928KB
// 276ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, t;
	cin >> n >> t;
	vector<int> v(n);
	for(int &e : v) cin >> e;
	sort(v.begin(), v.begin() + t);
	for(int e : v) cout << e << " ";
}