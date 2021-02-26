#include<bits/stdc++.h>
using namespace std;

int main(){
  int N; cin >> N;
  string S; cin >> S;
  int w_sum = 0;
  for(int i = 0; i < N; i++){
    if(S.at(i) == 'W') w_sum++;
  }
  int r_sum = N - w_sum;
  int fewer = min(r_sum, w_sum);
  
  vector<int> left_w(N);
  int count_w = 0;
  vector<int> right_r(N);
  for(int i = 0; i < N; i++){
    if(S.at(i) == 'W')count_w++;
    left_w.at(i) = count_w;
  }
  int count_r = 0;
  for(int i = N-1; i >= 0; i--){
    if(S.at(i) == 'R') count_r++;
    right_r.at(i) = count_r;
  }
  int even = 1000000007;
  for(int i = 0; i < N-1; i++){
    if(left_w.at(i) == right_r.at(i+1)){
      even = min(even, left_w.at(i));
    }
  }
  cout << min(even, fewer) << endl;
}
