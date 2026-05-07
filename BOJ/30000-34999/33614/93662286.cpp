// 2025년 4월 28일 14:35:06
// 맞았습니다!!
// 2020KB
// 28ms
#include<iostream>
using namespace std;
int main() {
  int T,a,b,c;
  cin>>T;
  while(T--) {
    cin>>a>>b>>c;
    cout<<min(b,c)+a-1<<'\n';
  }
}