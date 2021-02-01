#include <bits/stdc++.h>
using namespace std;

int main(){
  int N; cin >> N;
  vector<int> H(N);
  for(int i = 0; i < N; i++){
    cin >> H.at(i);
  }
  H.push_back(0);
  int ans = 0;
  while(true){
    int left = 0;
    while(H.at(left) == 0 && left < N-1){
      left++;
    }
    int right = left + 1;
    while(H.at(right) != 0 && right < N){
      right++;
    }
    //cout << "left " << left << " right " << right << endl;
    if(left == N-1 && right == N) break;
    for(int i = left; i < right; i++){
      H.at(i)--;
    }
    ans++;
  }
  ans += H.at(N-1);
  cout << ans << endl;
}
    
  
  
