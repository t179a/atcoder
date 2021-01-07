#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  int k;
  cin >> s >> k;
  int len_s = s.size();
  if(len_s < k){
    cout << 0 << endl;
    return 0;
  }
  set<string> ss;
  for(int i = 0; i < len_s-k + 1; i++){
    string ans = "";
    for(int j = i; j < i + k; j++){
      ans += s.at(j);
    }
    ss.insert(ans);
  }
  cout << ss.size() << endl;
}
