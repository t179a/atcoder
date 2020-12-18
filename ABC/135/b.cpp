#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> vec(N);
  for(int i = 0; i < N; i++){
    cin >> vec.at(i);
  }
  int sum_diff = 0;
  for(int i = 0; i < N; i++){
    if(vec.at(i) != i+1){
	  sum_diff++;
    }
  }
  string ans;
  if(sum_diff == 0 || sum_diff == 2){
    ans = "YES";
  }else{
    ans = "NO";
  };
  cout << ans << endl;
}
