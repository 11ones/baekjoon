// 2024년 1월 13일 17:04:45
// 틀렸습니다
// KB
// ms
#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
typedef long long l;
typedef pair<l, l> p;

struct cmp {
  bool operator()(p &a, p &b) {
    if (a.first != b.first) {
      return a.first > b.first;
    } else {
      return a.second > b.second;
    }
  }
};

l n, m, a, b;
pair<l, vector<int>> c[200001];
vector<p> v[200001];

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> n >> m >> a >> b;
  for (int i = 0; i < m; i++) {
    l x, y, z;
    cin >> x >> y >> z;
    v[x].push_back({y, z});
    v[y].push_back({x, z});
  }

  for (int i = 1; i <= n; i++) {
    c[i].first = 2000000000;
  }

  priority_queue<p, vector<p>, cmp> q;
  c[a].first = 0;
  q.push({0, a});

  while (!q.empty()) {
    p tq = q.top();
    q.pop();
    int tmp = tq.second;
    auto tc = &c[tmp];
    auto tr = &v[tmp];
    if (tq.first > (*tc).first)
      continue;
    for (int i = 0; i < (*tr).size(); i++) {
      auto ti = &c[(*tr)[i].first];
      if ((*ti).first == (*tc).first + (*tr)[i].second) {
        (*ti).second.push_back(tmp);
      } else if ((*ti).first > (*tc).first + (*tr)[i].second) {
        (*ti).first = (*tc).first + (*tr)[i].second;
        (*ti).second.clear();
        (*ti).second.push_back(tmp);
        q.push({(*ti).first, (*tr)[i].first});
      }
    }
  }
  queue<l> f;
  vector<l> tv;
  vector<l> ans;
  f.push(b);
  while (!f.empty()) {
    int tmp = f.front();
    f.pop();
    for (auto elem : c[tmp].second) {
      f.push(elem);
      tv.push_back(elem);
    }
  }

  tv.push_back(b);
  sort(tv.begin(), tv.end());
  ans.push_back(tv[0]);
  for (int i = 1; i < tv.size(); i++) {
    if (tv[i] != ans.back()) {
      ans.push_back(tv[i]);
    }
  }
  cout << ans.size() << '\n';
  for (auto elem : ans) {
    cout << elem << " ";
  }
}