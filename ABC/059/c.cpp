#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int64_t> v(N);
  for(int i = 0; i < N; i++){
    cin >> v.at(i);
  }
  int64_t sum_o = 0;
  int64_t count_o = 0;
  //奇数番目までの和が正、偶数番目が負
  for(int i = 0; i < N; i++){
    sum_o += v.at(i);
    if(i % 2 == 0){
      if(sum_o <= 0){
        count_o += 1 - sum_o;
        sum_o = 1;
      }
    }else{
      if(sum_o >= 0){
        count_o += sum_o + 1;
        sum_o = -1;
      }
    }
  }
  int64_t sum_e = 0;
  int64_t count_e = 0;
  //奇数番目までの和がが負、偶数番目が正
  for(int i = 0; i < N; i++){
    sum_e += v.at(i);
    if(i % 2 == 1){
      if(sum_e <= 0){
        count_e += 1 - sum_e;
        sum_e = 1;
      }
    }else{
      if(sum_e >= 0){
        count_e += sum_e + 1;
        sum_e = -1;
      }
    }
  }
  cout << min(count_o, count_e) <<endl;
}
  
