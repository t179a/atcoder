#include<bits/stdc++.h>
using namespace std;

int main(){
  int N; cin >> N;
  vector<pair<string, int>> vp;
  for(int i = 0; i < N; i++){
    string s; int h; cin >> s >> h;
    vp.emplace_back(s, h);
  }
  sort(vp.begin(), vp.end(), [](pair<string, int>a, pair<string, int>b){
    return a.second > b.second;});
  cout << vp.at(1).first << endl;
}
