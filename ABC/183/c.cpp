#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  vector<int> vec(N-1);
  for(int i = 2; i <= N; i++){
    vec.at(i-2) = i;
  }
  int d[N][N];
  for(int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){
      cin >> d[i][j];
    }
  }
  int ans = 0;
  do{
    int sum = 0;
    for(int i = 0; i < N; i++){
      if(i == 0){
        sum += d[0][vec.at(i)-1];
      }else if(i == N -1){
        sum += d[vec.at(i-1)-1][0];
      }else{
        sum += d[vec.at(i-1)-1][vec.at(i)-1];
      }
    }
    if(sum == K){
      ans++;
    }
  }while(next_permutation(vec.begin(), vec.end()));
  cout << ans << endl;
    
      
}
