#include<bits/stdc++.h>
using namespace std;

int main(){
  int W; cin >> W;
  string S = "DiscoPresentsDiscoveryChannelProgrammingContest2016";
  int len = S.size();
  string ln = "";
  for(int i = 0; i < len; i++){
    ln.push_back(S.at(i));
    if(i == len - 1 || ln.size() == W){
      cout << ln << endl;
      ln = "";
    }
  }  
}
  
  
