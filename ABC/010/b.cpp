#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int ans = 0;
  for(int i = 0; i < n; i++){
    int num;
    cin >> num;
    if(num % 2 == 0 ){
      num--;
      ans++;
    }
    if(num % 3 == 2){
      num--;
      ans++;
    }
    if(num % 2 == 0){
      num--;
      ans++;
    }
  }
  cout << ans << endl;
}
  
