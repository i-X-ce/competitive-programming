/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;
set<int> st;

void dfs(vector<int>&r, vector<int>a, int &k, int sum){
  int ten = 1;
  int s = 0;
  for (int i=0;i<a.size();i++){
    s += a.at(a.size() - i - 1) * ten;
    ten *= 10;
  }
  if (sum % k == 0){
    if (st.count(s)) return;
    st.insert(s);
  }
  for (int i=0;i<a.size();i++){
    a.at(i)++;
    if (r.at(i) >= a.at(i)) dfs(r, a, k, sum + 1);
    a.at(i)--;
  }
}

int main() {
  int n, k; cin >> n >> k;
  vector<int>r(n); 
  for (int i=0;i<n;i++) cin >> r.at(i);
  vector<int>a(n, 1);
  dfs(r, a, k, n);
  
  for (int num : st){
    string s = to_string(num);
    for (int i=0;i<n;i++) cout << s.at(i) << " ";
    cout << endl;
  }

  return 0;
}