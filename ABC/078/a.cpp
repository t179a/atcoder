#include <bits/stdc++.h>
using namespace std;

int main(){
  char X, Y;
  cin >> X >> Y;
  int diff = X - Y;
  char ans = '=';
  if(diff > 0){
	ans = '>';
  }else if(diff < 0){
    ans = '<';
  }
  cout << ans << endl;
}
