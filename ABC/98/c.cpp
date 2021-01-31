#include <bits/stdc++.h>
using namespace std;

int main(){
  //全てE
  //全てW
  //左側全てE右側全てW
  
  int N;
  string S;
  cin >> N >> S;
  int sumE = 0,sumW = 0;
  for(int i = 0; i < N; i++){
    if(S.at(i) == 'E') sumE++;
    else sumW++;
  }
  
  int ans = 1000000000;
  int left = 0;
  int right = sumE;
  for(int i = 0; i < N; i++){
    if(S.at(i) == 'E'){
      right--;
      int sum = right + left;
      ans = min(ans, sum);
    }else{
      int sum = right + left;
      ans = min(ans, sum);
      left++;
    }
  }
  cout << ans << endl;
}
  
  
