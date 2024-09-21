/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n; cin >> n;
  vector<int>a(n);
  vector<vector<long long>>asum(n+1, vector<long long>(0));
  for (int i=0;i<n;i++){
    int abf; cin >> abf;
    a.at(i) = abf;
    long long bfsize = asum.at(abf).size()+1;
    // if (bfsize <= 2) asum.at(abf).push_badk(0);
    // else if (bfsize == 3) asum.at(abf).push_back(1);
    // else asum.at(abf).push_back(bfsize*(bfsize-1)/2);
    asum.at(abf).push_back(bfsize*(bfsize-1)/2);
  }
  long long sum = 0;
  for (int i=1;i<=n;i++){
    if (asum.at(i).size() > 0){
      sum += asum.at(i).at(asum.at(i).size()-1);
    }
  }

  for (int i=0;i<n;i++){
    int bf = a.at(i);
    int maxL = asum.at(bf).size()-1;
    int maxL2 = max(0,(maxL-1));
    cout << sum - asum.at(bf).at(maxL) + asum.at(bf).at(maxL2) << endl;
  }

  // map<int, int>mp;
  // map<int, long long>mp2;
  // vector<int>ai(n);
  // for (int i=0;i<n;i++){
  //   int a; cin >> a;
  //   ai.at(i) = a;
  //   mp[a]++;
  //   mp2[a] = tgamma(mp[a]+1);
  // }
  // long long sum = 0;
  // for (auto pr : mp2){
  //   sum += pr.second;
  // }
  // for (int i=0;i<n;i++){
  //   long long bfn;
  //   if (mp[ai.at(i)] <= 2) bfn = 0;
  //   else if (mp[ai.at(i) == 3]) bfn == 1;
  //   else  bfn = mp2[ai.at(i)] / mp[ai.at(i)];
  //   cout << bfn << " ";
  //   cout << sum - mp2[ai.at(i)] + bfn << endl;
  // }
  return 0;
}