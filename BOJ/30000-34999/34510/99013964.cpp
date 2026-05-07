// 2025년 9월 29일 19:10:46
// 틀렸습니다
// KB
// ms
#include <iostream>
using namespace std;

int main() {
  int H1, H2, H3, N;
  cin >> H1 >> H2 >> H3 >> N;
  if(N % 2) {
    cout << N / 2 * (H2 + H3 * 2) + H1 + H2 + H3;
  } else {
    cout << N / 2 * (H2 + H3 * 2);
  }
}