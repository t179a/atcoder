#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  int sum = 0;
  int sum_zero = 0;
  for(int i = 0; i < N; i++){
    int num;
    cin >> num;
    if(num == 0){
      sum_zero++;
    }else{
      sum += num;
    }
  }
  int ans = (sum + (N - sum_zero) - 1) / (N-sum_zero);
  cout << ans << endl;
}
  
