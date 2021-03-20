#include <bits/stdc++.h>
using namespace std;

int main(){
  int64_t N; cin >> N;
  string S = to_string(N);
  int len = S.size();
  int64_t ans = 0;
  
  for(int i = 0; i < len - 1; i++){
    int k = i + 1;
    if(k % 2 != 0)continue;
    ans += 9 * pow(10, (k/2)-1);
  }
  if(len % 2 == 0){
    string first = S.substr(0,(len/2));
    string second = S.substr((len/2));
    
    int f_i = stoi(first);
    int s_i = stoi(second);
    int sum = f_i - pow(10, (len/2) - 1) + 1;
    if(sum > 0){
      if(f_i <= s_i){
        ans += sum;
      }else{
        ans += (sum - 1);
      }
    }
  }
  cout << ans << endl;
}
  
