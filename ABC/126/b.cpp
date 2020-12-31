#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  cin >> S;
  int left = stoi(S.substr(0,2));
  int right = stoi(S.substr(2,2));
  string ans;
  if(left >= 1 && left <= 12 && right >= 1 && right <= 12){
    ans = "AMBIGUOUS";
  }else if(right >= 1 && right <= 12){
    ans = "YYMM";
  }else if(left >= 1 && left <= 12){
    ans = "MMYY";
  }else{
    ans = "NA";
  }
  cout << ans << endl;
}
