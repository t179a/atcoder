#include <bits/stdc++.h>
using namespace std;

int main(){
  int X;
  cin >> X;
  int ans;
  for(int i = X;;i++){
    int sum = 0;
	for(int j = 2; j < i; j++){
      if(i % j != 0){
        sum++;
      }
    }
    if(sum == i-2){
      ans = i;
      break;
    }
  }
  cout << ans << endl;
}
         
