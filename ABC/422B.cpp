/*
g++ temp.cpp
./a.out
*/
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, -1, 0, 1};

int main() {
  int h, w; cin >> h >> w;
  vector<string> s(h);
  for (int i = 0; i < h; i++) cin >> s.at(i);

  bool ok = true;

  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      char c = s.at(i).at(j);
      if (c == '#'){
        int cnt = 0;
        for (int k = 0; k < 4; k++) {
          int ni = i + dx[k], nj = j + dy[k];
          if (0 <= ni && ni < h && 0 <= nj && nj < w) {
            if (s.at(ni).at(nj) == '#') {
              cnt++;
            } 
          }
        }
        if (!(cnt == 2 || cnt == 4)) {
          ok = false;
          break;
        }
      }
    }
  }
  if (ok) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}