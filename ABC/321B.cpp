/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


// int main() {
//   int n, x; cin >> n >> x;
//   vector<int>a(n-1);
//   for (int i=0;i<n-1;i++) cin >> a.at(i);
//   sort(a.begin(), a.end());
//   int sum = 0;
//   for (int i=1;i<n-2;i++) sum += a.at(i);

//   if (n == 3) sum = a.at(n-2);

//   if (x - sum > a.at(n-2)){
//     cout << -1 << endl;
//   }else{
//     cout << max(0, x-sum) << endl;
//   }
//   return 0;
// }

// int main() {
//     int n, x;
//     cin >> n >> x;
//     vector<int> a(n - 1);
//     for (int i = 0; i < n - 1; i++) cin >> a.at(i);
//     sort(a.begin(), a.end());

//     int sum = 0;
//     for (int i = 0; i < n - 1; i++) sum += a.at(i);

//     int min_score = a.at(0);
//     int max_score = a.at(n - 2);

//     if (x - sum <= 0) {
//         cout << 0 << endl;
//     } else if (x - sum > max_score) {
//         cout << -1 << endl;
//     } else {
//         cout << x - sum << endl;
//     }

//     return 0;
// }

int main(){
    int n, x; cin >> n >> x;
    vector<int>a(n-1);
    for (int i=0;i<n-1;i++) cin >> a.at(i);

    sort(a.begin(), a.end());
    int res = 0;
    for (int i=1;i<n-2;i++) res += a.at(i);
    if (n == 3){
        if (a.at(1) < x){
            cout << -1 << endl;
            return 0;
        }else{
            cout << 0 << endl;
            return 0;
        }
    }
    if (x - res > a.at(n-2) || x - res > 100){
        cout << -1 << endl;
        return 0;
    }
    cout << x - res << endl;
    return 0;
}