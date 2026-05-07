// 2025년 9월 21일 23:02:38
// 맞았습니다!!
// 2268KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> v{2, 4, 9, 19, 39, 79, 159, 319, 639, 1279, 2559, 5119, 10239, 20479, 40959, 81919};
  string s;
  cin >> s;
  for(int i = 0; i < 16; ++i) if(s.size() == v[i]) cout << i;
}