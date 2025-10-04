/*
g++ temp.cpp -I ./ac-library 
./a.out
*/
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  bool debug = false;

  ll n, q; cin >> n >> q;
  map<ll, ll> multi; // 複数になったらここに入れとく
  ll dead = 0;
  vector<ll> output(0);
  for (ll qi = 0; qi < q; qi++) {
    ll x, y; cin >> x >> y;
    if (x <= dead){
      output.push_back(0);
      continue;
    }
    ll sum = 0;
    {
      ll i = dead;
      vector<ll> del(0);
      for (auto m : multi){
        if (m.first < dead) {
          continue;
        }
        if (m.first > x){
          break;
        } 
        sum += m.second;
        sum += max(m.first - i - 1, ll(0));
        i = m.first;
        multi[m.first] = 0;
        del.push_back(m.first);
      }
      sum += x - i;
      for (auto v : del) multi.erase(v);
    }

    dead = x;
    if (!multi.count(y)) multi[y] = 1;
    multi[y] += sum;
    output.push_back(sum);

    if (debug) {
      cout << qi << " multi: ";
      for (auto v : multi) {
        cout << "(" << v.first << ", " << v.second << ")" << " ";
      }
      cout << endl;
      for (ll di = 1; di <= n; di++) {
        if (di <= dead) {
          cout << "x ";
          continue;
        }
        if (!multi.count(di)){
          cout << "1 ";
        } else {
          cout << multi[di] << " ";
        }
      }
      cout << endl;
    }
  }
  for (auto v : output) cout << v << endl;
  return 0;
}