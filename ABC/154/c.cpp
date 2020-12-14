#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  set<int> s;
  for(int i = 0; i < N; i++){
    int num;
    cin >> num;
    s.insert(num);
  }
  string ans;
  if(N == s.size()){
    ans = "YES";
  }else{
    ans = "NO";
  }
  cout << ans << endl;
}
    
