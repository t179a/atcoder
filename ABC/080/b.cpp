#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  string str = to_string(N);
  int len = str.size();
  int sum = 0;
  for(int i = 0; i < len; i++){
	sum += str.at(i) - '0';
  }
  string ans = "No";
  if(N % sum == 0){
    ans = "Yes";
  }
  cout << ans << endl;
}
