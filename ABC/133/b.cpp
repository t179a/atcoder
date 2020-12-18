#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, D;
  cin >> N >> D;
  vector<vector<int>> vec(N, vector<int>(D));
  for(int i = 0; i < N; i++){
    for(int j = 0; j < D; j++){
      cin >> vec.at(i).at(j);
    }
  }
  int ans = 0;
  for(int i = 0; i < N; i++){
    for(int j = i+1; j < N; j++){
      int sum = 0;
      for(int k = 0; k < D; k++){
        sum += pow(vec.at(i).at(k) - vec.at(j).at(k), 2);
      }
      for(int t = 0; t <= sum; t++){
        if(t*t == sum){
          ans += 1;
          break;
        }
      }
    }
  }
  
  cout << ans << endl;
}
  
  
  
      
