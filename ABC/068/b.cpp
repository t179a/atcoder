#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  int ans = 1;
  int max = 0;
  for(int i = 1; i <= N; i++){
    int num = i;
    int count = 0;
    while(num % 2 == 0){
      num /= 2;
      count++;
    }
    if(count > max){
      ans = i;
      max = count;
    }
  }
  cout << ans << endl;
}
    
      
      
