#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  string ans;
  if(N == 100){
    ans = "Perfect";
  }else if(N >= 90){
	ans = "Great";
  }else if(N >= 60){
    ans = "Good";
  }else {
    ans = "Bad";
  }
  cout << ans << endl;
}
