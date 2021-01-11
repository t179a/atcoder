#include <bits/stdc++.h>
using namespace std;

int main(){
  int A, B, C, X, Y;
  cin >> A >> B >> C >> X >> Y;
  //全てハーフハーフを使う
  int all_half = max(X, Y) * C * 2;
  //min(X,Y)に合わせてハーフハーフを使う
  int Z = X >= Y ? A : B;
  int min_half = min(X, Y) * C * 2 + abs(X - Y) * Z;
  //ハーフハーフを使わない
  int no_half = A * X + B * Y;
  int ans = min(all_half, min(min_half, no_half));
  cout << ans << endl;
}
  
