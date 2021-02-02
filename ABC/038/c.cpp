#include <bits/stdc++.h>
using namespace std;

int main(){
  int64_t N;
  cin >> N;
  vector<int64_t> A(N);
  for(int i = 0; i < N; i++){
    cin >> A.at(i);
  }
  A.push_back(-1);
  int64_t ans = 0;
  int64_t left = 0;
  while(left != N){
    int64_t right = left;
    while(A.at(right+1) > A.at(right)){
      right++;
    }
    //cout << "left " << left << " right " << right << endl;
    ans += (1 + (right - left+1))*(right - left+1)/2 ;
    left = right + 1;
  }
  cout << ans << endl;
}
    
  
  
