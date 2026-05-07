// 2024년 1월 13일 16:32:46
// 런타임 에러
// KB
// ms
#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

typedef pair<int, int> p;

int n, m, a, b;
pair<int, vector<int>> c[200001];
vector<p> v[200001];

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> n >> m >> a >> b;
  for (int i = 0; i < m; i++) {
    int x, y, z;
    cin >> x >> y >> z;
    v[x].push_back({z, y});
    v[y].push_back({z, x});
  }
  priority_queue<p, vector<p>, greater<p>> q;
  q.push({0, a});


  while (!q.empty()) {
    p tq = q.top();
    q.pop();
    int tmp = tq.second;
    auto tc = &c[tmp];
    auto tr = &v[tmp];
    if (tmp == a) {
      continue;
    }
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
  cout << v[0].size();
  queue<int> f;
  vector<int> tv;
  vector<int> ans;
  f.push(b);
  while (!f.empty()) {
    int tmp = f.front();
    f.pop();
    for (auto elem : c[tmp].second) {
      f.push(elem);
      tv.push_back(elem);
    }
  }

  sort(tv.begin(), tv.end());
  ans.push_back(tv[0]);
  for (int i = 1; i < tv.size(); i++) {
    if (v[i] != v[i - 1]) {
      ans.push_back(tv[i]);
    }
  }
  cout << ans.size() << '\n';
  for (auto elem : ans) {
    cout << elem << " ";
  }
}