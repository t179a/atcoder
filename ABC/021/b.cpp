#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, a, b, K;
  cin >> N >> a >> b >> K;
  set<int> s;
  s.insert(a);
  s.insert(b);
  for(int i = 0; i < K; i++){
    int num;
    cin >> num;
    s.insert(num);
  }
  string ans = "NO";
  int len_s = s.size();
  if(len_s == K + 2){
    ans = "YES";
  }
  cout << ans << endl;
}
