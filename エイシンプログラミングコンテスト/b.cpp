#include<bits/stdc++.h>
using namespace std;

int main(){
  int N; cin >> N;
  vector<int> V(N);
  for(int i = 0; i < N; i++){
    cin >> V.at(i);
  }
  
  int ans = 0;
  for(int i = 0; i < N; i++){
    if(i % 2 == 0 && V.at(i) % 2 != 0){
      ans++;
    }
  }
  cout << ans << endl;
}
