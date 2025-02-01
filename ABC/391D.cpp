/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  long long n, w; cin >> n >> w;
  vector<map<long long, long long>> clms(w); // [y]=id
  long long maxlen = 0;
  for (long long i=0;i<n;i++){
    long long x, y; cin >> x >> y;
    x--; y--;
    clms.at(x)[y] = i;
    maxlen = max(maxlen, (long long)clms.at(x).size());
  }

  map<long long, long long> cellt; // [id]=消滅する時間
  for (long long i=0;i<maxlen;i++){
    vector<long long>cells(0);
    long long maxt = 0;
    bool ok = true;
    for (long long j=0;j<w;j++){
      if (clms.at(j).size() <= 0) {
        ok = false;
        continue;
      };
      auto p = *clms.at(j).begin();
      cells.push_back(p.second);
      clms.at(j).erase(p.first);
      maxt = max(maxt, p.first);
    }
    for (long long j=0;j<cells.size();j++){
      cellt[cells.at(j)] = ok ? maxt : -1;
    }
  }
  long long q; cin >> q;
  for (long long i=0;i<q;i++){
    long long t, a; cin >> t >> a; t--; a--;
    if (cellt[a] > t || cellt[a] == -1) cout << "Yes" << endl;
    else cout << "No" << endl;
  }
  return 0;
}