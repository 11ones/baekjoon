// 2024년 2월 24일 23:14:23
// 틀렸습니다
// KB
// ms
#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int x;
  int v[10] = {0, 111, 22, 33, 4, 55, 6, 77, 8, 9};
  for(int i = 0; i < n; i++) {
    cin >> x;
  }
  if(x == 0) {
    cout << "NO";
  } else {
    cout << "YES\n" << v[x];
  }
}