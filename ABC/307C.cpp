/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

void clip(vector<string>&clip){
  int minw = 11,minh = 11,maxw = 0,maxh = 0;
  for (int i=0;i<clip.size();i++){
    for  (int j=0;j<clip.at(0).size();j++){
      if (clip.at(i).find('#') > 0){
        int f,rf;
        f = clip.at(i).find('#');
        rf = clip.at(i).rfind('#');
        minw = min(f,minw);
        maxw = max(rf,maxw);
        minh = min(minh,i);
        maxh = max(maxh,i);
      }
    }
  }
  for (int i=0;i<maxh-minh+1;i++){
    clip.at(i) = clip.at(minh+i);
    clip.at(minh+i) = "";
    clip.at(i) = clip.at(i).substr(minw, maxw-minw+1);
  }
}

int main() {
  int ha,wa,hb,wb,hx,wx;
  cin >> ha >> wa;
  vector<string>a(ha);
  for (int i=0;i<ha;i++)cin >> a.at(i);
  clip(a);
  cin >> hb >> wb;
  vector<string>b(hb);
  for (int i=0;i<hb;i++) cin >> b.at(i);
  clip(b);
  cin >> hx >> wx;
  vector<string>x(hx);
  for (int i=0;i<hx;i++) cin >> x.at(i);
  clip(x);

  cout << endl;
  for (int i=0;i<x.size();i++) cout << x.at(i) << endl;
  return 0;
}