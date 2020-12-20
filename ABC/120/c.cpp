#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  cin >> S;
  int len_s = S.size();
  int sum_r = 0;
  int sum_b = 0;
  for(int i = 0; i < len_s; i++){
	if(S.at(i) == '0'){
      sum_r++;
    }else{
      sum_b++;
    }
  }
  int ans = min(sum_r, sum_b) * 2;
  cout << ans << endl;
}
