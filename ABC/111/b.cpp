#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  int ans;
  for(int i = 1; i <= 9; i++){
    int num = i + i * 10 + i * 100;
    if((num - N) >= 0 ){
      ans = num;
      break;
    }
  }
  cout << ans << endl;
}
