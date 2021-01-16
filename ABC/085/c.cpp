#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, Y;
  cin >> N >> Y;
  int p = Y / 10000;
  int q = Y / 5000;
  for(int i = 0; i <= p; i++){
    for(int j = 0; j <= q; j++){
      if(i + j > N){
        continue;
      }else{
        int k = N - i - j;
        int sum = 10000 * i + 5000 * j + 1000 * k;
        if(sum == Y){
          cout << i << " " << j << " " << k << endl;
          return 0;
        }
      }
    }
  }
  cout << "-1 -1 -1" << endl;
}
  
