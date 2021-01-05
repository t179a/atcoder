#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, A, B;
  cin >> N >> A >> B;
  int sum = 0;
  for(int i = 0; i < N; i++){
    string dir;
    int num;
    cin >> dir >> num;
    if(num > B){
      num = B;
    }else if(num < A){
      num = A;
    }
    if(dir == "East"){
      sum += num;
    }else{
      sum -= num;
    }
  }
  string ans1;
  if(sum > 0){
    ans1 = "East";
  }else if(sum < 0){
    ans1 = "West";
  }
  int ans2 = abs(sum);
  if(sum == 0){
    cout << ans2 << endl;
  }else{
    cout << ans1 << ' ' << ans2 << endl;
  }
  
}
