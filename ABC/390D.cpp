/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  long long n; cin >> n;
  vector<long long>a(n);
  for (long long i=0;i<n;i++){
    cin >> a.at(i);
  }
  set<long long>st;
  queue<vector<long long>>q;
  q.push(a);
  while(!q.empty()){
    vector<long long>now = q.front();
    if (now.size() == 0) break;
    q.pop();
    long long value = 0;
    for (long long i=0;i<now.size();i++){
      value ^= now.at(i);
    }
    st.insert(value);
    for (int i=0;i<now.size();i++){
      vector<long long>next(0);
      for (int j=0;j<now.size();j++){
        if (i == j) continue;
        next.push_back(now.at(j));
      }
      for (int j=0;j<now.size()-1;j++){
        vector<long long>next2 = next;
        next2.at(j) += now.at(i);
        q.push(next2);
      }
    }
  }
  cout << st.size() << endl;
  return 0;
}