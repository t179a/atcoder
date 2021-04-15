#include<bits/stdc++.h>
using namespace std;

int main(){
  int N, A, B; cin >> N >> A >> B;
  vector<int> vi(N);
  for(int i = 0; i < N; i++){
    cin >> vi.at(i);
  }
  int left = 0;
  int mid = 0;
  int right = 0;
  for(int i = 0; i < N; i++){
    if(vi.at(i) <= A){
      left++;
    }else if(vi.at(i) <= B){
      mid++;
    }else{
      right++;
    }
  }
  int ans = min(left, min(mid, right));
  cout << ans << endl;
}
  
    
