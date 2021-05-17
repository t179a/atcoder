#include<bits/stdc++.h>
using namespace std;

void calc(int64_t &n){
   if(n % 200 == 0){
    n /= 200;
  }else{
    n *= 1000;
    n += 200;
  }
}

int main(){
  int64_t N, K; cin >> N >> K;
  
  for(int i = 0; i < K; i++){
    calc(N);
  }
  cout << N << endl;
    
}
