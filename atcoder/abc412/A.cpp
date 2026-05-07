#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, c = 0;
    cin >> N;
    while (N--) {
        int a, b;
        cin >> a >> b;
        a < b ? ++c : 0;
    }
    cout << c;
}