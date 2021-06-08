#include<bits/stdc++.h>
using namespace std;

int main(){
  string S; cin >> S;
  string orig = "yahoo";
  vector<char> vc;
  vector<char> vo;
  for(int i = 0; i < 5; i++){
    vc.push_back(S.at(i));
    vo.push_back(orig.at(i));
  }
  sort(vc.begin(), vc.end());
  sort(vo.begin(), vo.end());
  string ans = "YES";
  for(int i = 0; i < 5; i++){
    if(vc.at(i) != vo.at(i)){
      ans = "NO";
    }
  }
  cout << ans << endl;
}
  
