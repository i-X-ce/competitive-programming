/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

struct LogData
{
  long long a, b, c; // a -> b , a -> c
};


int main() {
  long long n, m; cin >> n >> m;
  vector<vector<long long>>cables(m, vector<long long>(0));
  set<long long> notVisited; // 探索していないサーバー
  for (long long i=0;i<m;i++){
    long long a, b; cin >> a >> b;
    a--; b--;
    cables.at(a).push_back(b);
    cables.at(b).push_back(a);
    notVisited.insert(a);
  }

  vector<LogData> ans(0);

  LogData loop = {-1, -1, -1};
  while (true){
    if (notVisited.empty()) break;
    auto p = *notVisited.begin();
    queue<LogData> q;
    q.push({-1, p, -1});

    if (loop.a != -1){
      ans.push_back({loop.a, loop.b, p});
    }

    while(true){
      if (q.empty()) break;
      LogData now = q.front();
      q.pop();
      if (!notVisited.count(now.b)){
        loop = {now.a, now.b, now.c};
        continue;
      }
      notVisited.erase(now.b);
      for (long long i=0;i<cables.at(now.b).size();i++){
        long long next = cables.at(now.b).at(i);
        q.push({now.b, next, -1});
      }
    }
  }

  cout << ans.size() << endl;
  for (long long i=0;i<ans.size();i++){
    cout << ans.at(i).a + 1 << " " << ans.at(i).b + 1 << " " << ans.at(i).c + 1 << endl;
  }
  return 0;
}