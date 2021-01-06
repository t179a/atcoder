#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<vector<char>> vec;
  for(int i = 0; i < 4; i++){
    vector<char> vc;
    for(int j = 0; j < 4; j++){
      char c;
      cin >> c;
      vc.push_back(c);
      ;
    }
    reverse(vc.begin(), vc.end());
    vec.push_back(vc);
  }
  reverse(vec.begin(), vec.end());
  for(int i = 0; i < 4; i++){
    for(int j = 0; j < 4; j++){
      if(j == 4){
        cout << vec.at(i).at(j);
      }else{
        cout << vec.at(i).at(j) << " ";
      }
    }
    cout << endl;
  }
    
}
