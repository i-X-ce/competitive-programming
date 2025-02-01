/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  map<string, string> mp;
  mp["N"] = "S";
  mp["E"] = "W";
  mp["W"] = "E";
  mp["S"] = "N";
  mp["NE"] = "SW";
  mp["NW"] = "SE";
  mp["SE"] = "NW";
  mp["SW"] = "NE";
  string d; cin >> d;
  cout << mp[d] << endl;
  return 0;
}