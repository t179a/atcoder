#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, M;
  cin >> N >> M;
  map<int, int> py;
  vector<pair<int, int>> origin;
  for(int i = 0; i < M; i++){
    int p, y;
    cin >> p >> y;
    py[y] = p;
    origin.emplace_back(p,y);
  }
  map<int, int> num;
  map<int, int> ans;
  for(auto p : py){
    int year = p.first;
    int pre = p.second;
    if(num.count(pre)){
      num[pre]++;
      ans[year] = num[pre];
    }else{
      num[pre] = 1;
      ans[year] = 1;
    }
  }
  for(int i = 0; i < M; i++){
    int p = origin.at(i).first;
    int y = origin.at(i).second;
    int n = ans[y];
    printf("%06d", p);
    printf("%06d\n", n);
  }
}
    
    
