#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  cin >> S;
  int len = S.size();
  set<char> st = {'A','C','G','T'};
  int ans = 0;
  for(int i = 0; i < len; i++){
    int sum = 0;
	for(int j = i; j < len; j++){
      if(st.count(S.at(j))){
        sum++;
      }else{
        break;
      }
    }
    ans = max(sum, ans);
  }
  cout << ans << endl;
}
