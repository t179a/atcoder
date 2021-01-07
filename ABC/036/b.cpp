#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<string> vec(N);
  for(int i = 0; i < N; i++){
    cin >> vec.at(i);
  }
  for(int i = 0; i < N; i++){
    string ans = "";
    for(int j = 0; j < N; j++){
      ans += vec.at(j).at(i);
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
  }
}
