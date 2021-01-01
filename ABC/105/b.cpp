#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  string ans = "No";
  
  for(int i = 0; i < 26; i++){
	for(int j = 0; j < 26; j++){
      int sum = 4 * i + 7 * j;
      if(sum == N){
        ans = "Yes";
      }
    }
  }
  cout << ans << endl;
}
  
