#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> vt = {0};
  vector<int> vs = {0};
  for(int i = 0; i < N; i++){
    int t, x, y;
    cin >> t >> x >> y;
    vt.push_back(t);
    vs.push_back(x + y);
  }
  string ans = "Yes";
  for(int i = 0; i < N; i++){
    int diff_t = vt.at(i+1) - vt.at(i);
    int diff_s = abs(vs.at(i+1) - vs.at(i));
    if(diff_t == diff_s){
      continue;
    }else if(diff_t > diff_s && (diff_t - diff_s) % 2 == 0){
      continue;
    }else{
      ans = "No";
    }
  }
  cout << ans << endl;
}
