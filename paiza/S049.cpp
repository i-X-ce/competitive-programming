/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n, x, f, s; cin >> n >> x >> f >> s;
  vector<vector<int>>days(10000, vector<int>(2));

  int cnt = 0;
  int hp = x;
  while (true){
    int day1, day2, hp1, hp2;
    if (cnt == 0){
      day1 = x; hp1 = x - f;
      day2 = day1; hp2 = hp1;
    }else{
      hp1 = days.at(cnt-1).at(1);
      day1 = days.at(cnt-1).at(0) + hp1;
      hp1 = max(0, hp1 - f);
    }
    if (cnt - 4 < 0){
      day2 = day1; hp2 = hp1;
    }else{
      hp2 = min(x, days.at(cnt-4).at(1) + s);
      day2 = days.at(cnt-4).at(0) + hp2;
      hp2 = max(0, hp2 - f);
    }

    if (day1 >= day2){
      days.at(cnt).at(0) = day1;
      days.at(cnt).at(1) = hp1;
    }else{
      days.at(cnt).at(0) = day2;
      days.at(cnt).at(1) = hp2;
    }

    if (days.at(cnt).at(0) >= n) break;
    cnt++;
  }
  
  cout << cnt + 1 << endl;
  return 0;
}