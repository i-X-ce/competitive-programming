#include <bits/stdc++.h>
using namespace std;

void reversen(int start, int end, vector<vector<double>>ka){
  vector<int>ans(end-start+1);
  for (int i=0;i<end-start+1;i++){
    ans.at(i) = ka.at(start+i).at(1);
  }
  sort(ans.begin(), ans.end());
  for (int i=0;i<end-start+1;i++){
    cout << ans.at(i) << " ";
  }
}

int main() {
  int n; cin >> n;
  vector<vector<double>>ka(n,vector<double>(2));
  for (int i=0;i<n;i++){
    double a,b;
    cin >> a >> b;
    ka.at(i).at(0) = (a/(a+b));
    ka.at(i).at(1) = i + 1;
  }
  sort(ka.begin(), ka.end(),  greater<>());
  for (int i=0;i<n;i++){
    int j=0;
    bool ok = true;
    while(ok){
      if (i+j >= n) break;
      if (ka.at(i).at(0) != ka.at(i+j).at(0)) break;
      j++;
    }
    reversen(i, i+j+1, ka);
    i += j;
  }
  return 0;
}