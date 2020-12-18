#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<int> vec(5);
  for(int i = 0; i < 5; i++){
    cin >> vec.at(i);
  }
  int K;
  cin >> K;
  string ans = "Yay!"; 
  int maxdiff = vec.at(4)-vec.at(0);
  if(maxdiff > K){
    ans = ":(";
  }
  cout << ans << endl;
}
