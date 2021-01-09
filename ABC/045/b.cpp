#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<string> vec(3);
  for(int i = 0; i < 3; i++){
    cin >> vec.at(i);
  }
  int next = 0;
  while(1){
    int tmp = next;
    string s = vec.at(next);
    if(s.size() == 0){
      char ans = 'A' + next;
      cout << ans << endl;
      return 0;
    }
    next = s.at(0) - 'a';
    s.erase(s.begin());
    vec.at(tmp) = s;
   
  }
}
    
