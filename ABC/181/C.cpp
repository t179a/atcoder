#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;
 
int main(){
  int n;
  cin >> n;
  vector<int> x(n), y(n);
  rep(i, n) cin >> x[i] >>y[i];
  rep(i, n) rep(j, i) rep(k, j){
    int x1 = x[i] - x[j];
    int x2 = x[j] - x[k];
    int y1 = y[i] - y[j];
    int y2 = y[j] - y[k];
    if(x1 * y2 == x2 * y1){
      cout << "Yes" << endl;
      return 0;
    }
  }
    cout << "No" << endl;
    return 0;
}
  
