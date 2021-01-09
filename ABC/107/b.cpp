#include <bits/stdc++.h>
using namespace std;

int main(){
  int H, W;
  cin >> H >> W;
  vector<string> vec(H);
  for(int i = 0; i < H; i++){
    cin >> vec.at(i);
  }
  vector<string> ans;
  for(int i = 0; i < H; i++){
    int count = 0;
    for(int j = 0; j < W ; j++){
      if(vec.at(i).at(j) == '#'){
        count++;
      }
    }
    if(count != 0){
      ans.push_back(vec.at(i));
    }
  }
  int alt_h = ans.size();
  set<int> skip_w;
  for(int i = 0; i < W; i++){
    int count = 0;
    for(int j = 0; j < alt_h; j++){
      if(ans.at(j).at(i) == '.'){
        count++;
      }
    }
    if(count == alt_h){
     skip_w.insert(i);
    }
  }
  
  int alt_w = ans.at(0).size();
  for(int i = 0; i < alt_h; i++){
    for(int j = 0; j < alt_w; j++){
      if(!skip_w.count(j)){
        cout << ans.at(i).at(j);
      }
      if(j == alt_w -1){
        cout << endl;
      }
    }
  }
  
  
}
