/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  string s; cin >> s;
  stack<char> st;
  map<char, char> mp = {{'(', ')'}, {'[', ']'}, {'<', '>'}};

  for (int i=0;i<s.size();i++){
    if (mp.count(s.at(i))){
      st.push(s.at(i));
    } else {
      if (st.empty()){
        cout << "No" << endl;
        return 0;
      }
      if (s.at(i) == mp[st.top()]){
        st.pop();
      } else {
        cout << "No" << endl;
        return 0;
      }
    }
  }
  if (!st.empty()){
    cout << "No" << endl;
    return 0;
  }
  cout << "Yes" << endl;
  return 0;
}