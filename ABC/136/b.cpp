#include <bits/stdc++.h>
using namespace std;

int main(){
  int S;
  cin >> S;
  int ans = 0;
  for(int i = 1; i <= S; i++){
    string str = to_string(i);
    int num = str.size();
    if(num%2 == 1){
      ans++;
    }
  }
  cout << ans << endl;
}
