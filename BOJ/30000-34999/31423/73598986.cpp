// 2024년 2월 18일 13:01:03
// 메모리 초과
// KB
// ms
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin >> n;
  string *arr = new string[n];
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int a, b;
  for(int i = 1; i < n; i++) {

    cin >> a >> b;
    arr[a - 1] += arr[b - 1];
    arr[b - 1] = "";
  }
  cout << arr[a - 1];
}