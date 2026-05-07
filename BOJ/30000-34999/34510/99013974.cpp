// 2025년 9월 29일 19:11:12
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
using namespace std;

int main() {
  long H1, H2, H3, N;
  cin >> H1 >> H2 >> H3 >> N;
  if(N % 2) {
    cout << N / 2 * (H2 + H3 * 2) + H1 + H2 + H3;
  } else {
    cout << N / 2 * (H2 + H3 * 2);
  }
}