#include<bits/stdc++.h>
using namespace std;

int main(){
  int N, M;
  cin >> N >> M;
  for(int i = 0; i <= N; i++){
    int rM = M - 3 * i;
    int rN = N - i;
    int p =  rM - 2 * rN;
    if(p % 2 != 0) continue;
    int baby = p / 2;
    int adult = rN - baby;
    if(baby >= 0 && adult >= 0 && i + adult + baby == N){
      cout << adult << " " << i << " " << baby << endl;
      return 0;
    }
  }
  cout << "-1 -1 -1" << endl;
  return 0;
    
    
}
