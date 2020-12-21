#include <bits/stdc++.h>
using namespace std;

int main(){
  int K;
  cin >> K;
  int ans = 0;
  for(int i = 1; i < K; i++){
    for(int j = i+1; j <= K; j++){
      if((i+j)%2==1 && i*j%2==0){
		ans++;
      }
    }
  }
  cout << ans << endl;
}
