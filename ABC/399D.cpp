/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  long long t; cin >> t;
  for (long long caseNum=0;caseNum<t;caseNum++){
    long long n; cin >> n;
    vector<long long>a(n*2);
    for (long long i=0;i<n*2;i++){
      cin >> a.at(i); a.at(i)--;
    }
    vector<set<long long>>st(n);
    vector<long long>cnt(n, 0);
    long long ans = 0;
    for (long long i=0;i<n*2-1;i++){
      long long u = a.at(i);
      long long v = a.at(i+1);
      if (st.at(u).count(v) || st.at(v).count(u)){
        if (!(st.at(u).count(u) || st.at(v).count(v)) && cnt.at(u) >= 2 && cnt.at(v) >= 2){
          ans++;
        }
      }
      cnt.at(u)++;
      cnt.at(v)++;
      st.at(u).insert(v);
      st.at(v).insert(u);
    }
    cout << ans << endl;
  }
  return 0;
}