#include <bits/stdc++.h>
using namespace std;



int main() {
  int a,b,x,y;
  cin >> a >> b >> x >> y;
  
  if(a == b){
    cout << x << endl;
  }
  if(a > b){
    int root1 = x + (a - b - 1) * y;
    int root2 = x + (a - b- 1) * 2 * x;
    int result = min(root1, root2);
    cout << result << endl;
  }
  if(a < b){
    int root1 = x + (b - a) * y;
    int root2 = x + (b - a) * 2 * x;
    int result = min(root1, root2);
    cout << result << endl;
  }
    
}
