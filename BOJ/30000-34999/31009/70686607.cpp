// 2023년 12월 24일 12:20:07
// 맞았습니다!!
// 2024KB
// 0ms
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
    
  int t, x, jinju;
  string s;
  cin >> t;
  int* arr = new int[t];
  for (int i = 0; i < t; i++) {
    cin >> s >> x;
    if(s == "jinju"){
      jinju = x;
      cout << x << '\n';
    }
    arr[i] = x;
  }
  sort(arr, arr + t);
  cout << t - (upper_bound(arr, arr + t, jinju) - arr);
}