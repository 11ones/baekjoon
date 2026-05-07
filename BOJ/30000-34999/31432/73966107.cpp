// 2024년 2월 25일 11:54:48
// 100점
// 2020KB
// 0ms
#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int x;
  int arr[10] = {0, 1, 22, 33, 4, 55, 6, 77, 8, 9};
  for(int i = 0; i < n; i++) {
    cin >> x;
  }
  cout << "YES\n" << arr[x];
}