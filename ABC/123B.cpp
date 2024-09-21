/*
g++ 123B.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  vector<int>a(5);
  for(int i=0;i<5;i++){
    cin >> a.at(i);
  }
  int time;
  sort(a.begin(),a.end());
  vector<int>ans;
  do{
    time = 0;
    for (int i=0;i<5;i++){
      time += a.at(i);
      if (time%10 != 0){
        time += 10;
      }
      time = time-time%10;
    }
    if (a.at(4)%10 != 0){
      time = time - 10 + a.at(4)%10;
    }
    ans.push_back(time);
  }while(next_permutation(a.begin(),a.end()));
  cout << *min_element(ans.begin(),ans.end());
  return 0;
}