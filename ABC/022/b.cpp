#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  set<int> s;
  int ans = 0;
  for(int i = 0; i < N; i++){
    int num;
    cin >> num;
    if(s.count(num)){
      ans++;
    }
    s.insert(num);
  }
  cout << ans << endl;
}
