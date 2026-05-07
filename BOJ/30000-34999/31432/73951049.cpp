// 2024년 2월 24일 22:55:42
// 틀렸습니다
// KB
// ms
#include <algorithm>
#include <iostream>
#include <queue>
#include <string>
#include <vector>
using namespace std;
typedef long long ll;

vector<string> v;
vector<int> prime{2};
string t = "";
int l;
int pl;

int find(int d) {
  int tmp = -1;
  t += v[0];
  for (int i = 0; i < l; i++) {
    t[d] = v[i][0];
    int j = 0;
    ll tmp = stoll(t);
    while (ll(prime[j]) * prime[j] <= tmp) {
      if (tmp % prime[j] == 0) {
        return tmp;
      }
    }
    if (d < 12) {
      tmp = find(d + 1);
    }
    if (tmp != -1) {
      break;
    }
  }
  return tmp;
}

int main() {
  // ios_base::sync_with_stdio(false);
  // cin.tie(NULL);

  for (int i = 3; i < 1'001'000; i++) {
    bool check = 1;
    for (auto e : prime) {
      if (e * e > i) {
        break;
      }
      if (i % e == 0) {
        check = 0;
        break;
      }
    }
    if (check) {
      prime.push_back(i);
    }
  }
  pl = prime.size();
  int n;
  cin >> n;
  int is_even = -1;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (x % 2 == 0) {
      is_even = x;
    }
    v.push_back(to_string(x));
  }
  l = v.size();
  sort(v.begin(), v.end());
  if (is_even != -1) {
    if (is_even == 0) {
      if (v.size() > 1) {
        cout << (v[1][0] - '0') * 10;
      } else {
        cout << "NO";
      }
    } else {
      cout << "YES\n" << is_even * 10 + is_even;
    }
  } else {
    int tmp = find(1);
    if (tmp == -1) {
      cout << "NO";
    } else {
      cout << "YES\n" << tmp;
    }
  }
}