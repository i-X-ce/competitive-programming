/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

struct Snake
{
  long long x, l;
};


int main() {
  long long q; cin >> q;
  vector<Snake>snakes(0);
  long long si = 0;
  long long def = 0;
  for (long long i=0;i<q;i++){
    int query; cin >> query;
    if (query == 1){
      long long l; cin >> l;
      if (snakes.size() == 0){
        snakes.push_back({0, l});
      } else {
        Snake last = snakes.at(snakes.size()-1);
        snakes.push_back({last.x + last.l, l});
      }
    } else if (query == 2){
      def += snakes.at(si).l;
      si++;
    } else if (query == 3){
      long long k; cin >> k;
      k--;
      cout << snakes.at(si + k).x - def << endl;
    }
  }
  return 0;
}