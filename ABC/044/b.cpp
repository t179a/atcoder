#include <bits/stdc++.h>
using namespace std;

int main(){
  string w;
  cin >> w;
  int len_w = w.size();
  set<char> sc;
  int sum = 'z' - 'a' + 1;
  vector<int> vec(sum, 0);
  for(int i = 0; i < len_w; i++){
    if(sc.count(w.at(i))){
      vec.at(w.at(i) - 'a')++;
    }else{
      sc.insert(w.at(i));
      vec.at(w.at(i) - 'a')++;
    }
  }
  for(int i = 0; i < sum; i++){
    if(vec.at(i) % 2 != 0){
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}
    
