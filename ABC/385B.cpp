/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int h, w, x, y; cin >> h >> w >> x >> y;
  vector<string>s(h);
  for (int i=0;i<h;i++) {
    cin >> s.at(i);
  }
  string t; cin >> t;
  x--; y--;
  int ans = 0;
  for (int i=0;i<t.size();i++){
    int px = x, py = y;
    if (t.at(i) == 'U'){
      x--;
    }
    else if (t.at(i) == 'D'){
      x++;
    }
    else if (t.at(i) == 'L'){
      y--;
    }
    else if (t.at(i) == 'R'){
      y++;
    }
    if (s.at(x).at(y) == '#'){
      x = px; y = py;
      continue;
    } else if (s.at(x).at(y) == '@'){
      ans++;
      s.at(x).at(y) = '.';
    }
  }
  cout << x + 1 << " " << y + 1 << " " << ans << endl;
  return 0;
}