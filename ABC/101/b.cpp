#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  string S = to_string(N);
  int sum = 0;
  int len = S.size();
  for(int i = 0; i < len; i++){
    sum += (S.at(i) - '0');
  }
  string ans = "No";
  if(N % sum == 0){
	ans = "Yes";
  }
  cout << ans << endl;
}
