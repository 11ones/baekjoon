// 2024년 2월 24일 23:24:12
// 틀렸습니다
// KB
// ms
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
  int n;
  cin >> n;
  vector<int> v;
  int x;
  int arr[10] = {0, 111, 22, 33, 4, 55, 6, 77, 8, 9};
  for(int i = 0; i < n; i++) {
    cin >> x;
    v.push_back(x);
  }
  sort(v.begin(), v.end());
  if(v.back() == 0) {
    cout << "NO";
  } else {
    cout << "YES\n" << arr[v.back()];
  }
}