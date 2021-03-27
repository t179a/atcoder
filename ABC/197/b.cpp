#include <bits/stdc++.h>
using namespace std;

int main(){
  int H, W, X, Y; cin >> H >> W >> X >> Y;
  X--; Y--;
  vector<string> vs;
  for(int i = 0; i < H; i++){
    string S; cin >> S;
    vs.push_back(S);
  }
  int ans = 1;
  for(int i = X + 1; i < H; i++){
    if(vs.at(i).at(Y) == '.'){
     ans++;
      //cout << i  << " "<< Y << endl;
    }else{
      break;
    }
  }
  for(int i = X - 1; i >= 0; i--){
    if(vs.at(i).at(Y) == '.'){
     ans++;
     //cout << i  << " "<< Y << endl;
    }else{
      break;
    }
  }
  for(int i = Y + 1; i < W; i++){
    if(vs.at(X).at(i) == '.'){
     ans++;
      //cout << X  << " "<< i << endl;
    }else{
      break;
    }
  }
  for(int i = Y - 1; i >= 0; i--){
    if(vs.at(X).at(i) == '.'){
      ans++;
      //cout << X  << " "<< i << endl;
    }else{
      break;
    }
  }
  cout << ans << endl;
}
  
