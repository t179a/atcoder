#include <bits/stdc++.h>
using namespace std;

int main(){
  int W, H, x, y;
  cin >> W >> H >> x >> y;
  int b = 0;
  if(2 * x == W && 2 * y == H){
    b = 1;
  }
  double a = (double) W * (double) H / 2.0;
  printf("%.10lf", a);
  cout << " " << b << endl;
}
  
  
  
  
