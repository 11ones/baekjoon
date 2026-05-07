// 2025년 7월 8일 21:39:41
// 맞았습니다!!
// 2020KB
// 8ms
#include <bits/stdc++.h>
using namespace std;

int main() {
    char a, b = '!';
    while (cin.get(a)) {
        if (a != b) cout << a;
        b = a;
    }
}