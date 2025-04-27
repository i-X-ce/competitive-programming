/*
g++ temp.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  long long n, d; cin >> n >> d;
  map<long long, long long> amp;
  vector<long long> a(n);
  for (long long i=0;i<n;i++){
    cin >> a.at(i);
    amp[a.at(i)]++;
  }
  map<long long, long long> pathcnt; // 数値をキーに、その差がDになる数値をパスとして保存
  long long cnt = 0;
  for (long long i=0;i<n;i++){
    vector<long long> diffs(0);
    diffs.push_back(a.at(i) + d);   
    if (a.at(i) - d >= 0) diffs.push_back(a.at(i) - d);
    for (long long diff : diffs){
      if (amp.count(diff)){
        pathcnt[a.at(i)] += amp[diff];
        pathcnt[diff] += amp[a.at(i)];
        cnt += amp[diff];
      }
    }
  }
  vector<pair<long long, long long>> vec(pathcnt.begin(), pathcnt.end());
  sort(vec.begin(), vec.end(), [](pair<long long, long long> a, pair<long long, long long> b) {
    return a.second > b.second;
  });
  long long ans = 0;
  for (long long i=0;i<vec.size();i++){
    ans += vec.at(i).second;
    cnt -= vec.at(i).second * 2;
    if (cnt <= 0){
      break;
    }
  }
  cout << ans << endl;
  

  // map<long long, set<long long>> path; // 数値をキーに、その差がDになる数値をパスとして保存
  // map<long long, long long> pathcnt; // 数値をキーに、その差がDになる数値をパスとして保存
  // long long cnt = 0;
  // for (long long i : a){
  //   long long diff = abs(i - d);
  //   if (st.count(diff)) {
  //     pathcnt[i] += pathcnt[i] + 1;
  //     pathcnt[diff] += pathcnt[diff] + 1;
  //     cnt++;
  //   }
  // }
  // cout << cnt << endl;
  // vector<pair<long long, long long>> vec(pathcnt.begin(), pathcnt.end());
  // sort(vec.begin(), vec.end(), [](pair<long long, long long> a, pair<long long, long long> b) {
  //   return a.second > b.second;
  // });

  // for (auto p : vec){
  //   cout << p.first << " " << p.second << endl;
  // }

  // long long ans = 0;
  // for (auto p : vec){
  //   ans++;
  //   cnt -= pathcnt[p.first];
  //   if (cnt <= 0){
  //     break;
  //   }
  //   pathcnt[p.first]--;
  //   pathcnt[abs(p.first - d)]--;
  // }
  // cout << ans << endl;
  return 0;
}