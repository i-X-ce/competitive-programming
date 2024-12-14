/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  vector<pair<int, char>>score(5);
  for (int i=0;i<5;i++){
    cin >> score.at(i).first;
    score.at(i).second = 'A' + i;
  }

  vector<pair<int, string>>ans((1<<5) - 1);
  for (int i=1;i<(1<<5);i++){
    int n = (1<<5) - i;
    bitset<5>bs(n);
    string s = "";
    int sum = 0;
    for (int j=0;j<5;j++){
      if (bs.test(j)){
        s += score.at(j).second;
        sum += score.at(j).first;
      }
    }
    ans.at(i-1) = make_pair(sum, s);
  }
   sort(ans.begin(), ans.end(), [](const pair<int, string>& a, const pair<int, string>& b) {
    if (a.first == b.first) {
      return a.second < b.second;
    }
    return a.first > b.first;
  });

  for (int i=0;i<(1<<5)-1;i++){
    cout << ans.at(i).second << endl;
  }
  return 0;
}