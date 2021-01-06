#include <bits/stdc++.h>
using namespace std;

int main(){
  int x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;
  int x = -(y2 - y1);
  int y = x2 - x1;
  int x3 = x2 + x;
  int y3 = y2 + y;
  int x4 = x1 + x;
  int y4 = y1 + y;
  cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;
}
  
