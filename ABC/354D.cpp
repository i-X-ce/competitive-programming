/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

float s[4][4] = {
  {1, 2, 1, 0},
  {2, 1, 0, 1},
  {1, 2, 1, 0},
  {2, 1, 0, 1}
};

int amr(int n){
  return (n % 4 + 4) % 4;
}

long long scalc(int x, int y, int w, int h){
  // cout << " sum:";
  long long sum = 0;
  for (int i=0;i<h;i++){
    for (int j=0;j<w;j++){
      sum += s[(i + y)%4][(j + x)%4];
      // cout << sum << " ";
    }
  }
  // cout << endl;
  return sum;
}

int main() {
  int a, b, c, d; cin >> a >> b >> c >> d;
  long long sum = 0;

  long long sw = (c - a) / 4, sh = (d - b) / 4;
  long long sw2 = (c - a) % 4, sh2 = (d - b) % 4;
  sum += 16 * sw * sh;

  int xs = amr(a), xe = amr(c);
  int ys = amr(d), ye = amr(b);

  sum += scalc(xs, ys, sw2, 4) * sh;
  sum += scalc(xs, ys, 4, sh2) * sw;
  sum += scalc(xs, ys, sw2, sh2);

  // cout << "xs:" << xs << endl;
  // cout << "ys:" << ys << endl;
  // cout << "sw:" << sw << endl;
  // cout << "sh:" << sh << endl;
  // cout << "sw2:" << sw2 << endl;
  // cout << "sh2:" << sh2 << endl;
  // cout << "1:" << 16 * sw * sh << endl;
  // cout << "2:" << scalc(xs, ys, sw2, 4) * sh << endl;
  // cout << "3:" << scalc(xs, ys, 4, sh2) * sw << endl;
  // cout << "4:" << scalc(xs, ys, sw2, sh2) << endl;
  cout << (long long)sum << endl;

  return 0;
}