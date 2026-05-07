// 2024년 2월 18일 12:15:14
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin >> n;
  int arr[4]{};
  char c;
  for(int i = 0; i < n; i++) {
    cin >> c;
    switch(c) {
      case 'C':
      arr[0]++;
      break;
      case 'S':
      arr[1]++;
      break;
      case 'I':
      arr[2]++;
      break;
      case 'A':
      arr[3]++;
    }
  }
  cin >> c;
  switch(c) {
    case 'C':
    cout << arr[0];
    break;
    case 'S':
    cout << arr[1];
    break;
    case 'I':
    cout << arr[2]++;
    break;
    case 'A':
    cout << arr[3]++;
  }
}