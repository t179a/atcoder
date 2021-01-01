#include <bits/stdc++.h>
using namespace std;

int main(){
  int A, B;
  cin >> A >> B;
  int ans = 0;
  for(int i = A; i <= B; i++){
    string str = to_string(i);
    int len = str.size();
    int sum = 0;
    for(int i = 0; i < len; i++){
      if(str.at(i) == str.at(len - 1 - i)){
        sum++;
      }
    }
    if(sum == len){
      ans++;
    }
  }
  cout << ans << endl;
}
