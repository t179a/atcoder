#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, M;
  cin >> N >> M;
  vector<pair<int, int>> p;
  for(int i = 0; i < N; i++){
    int x, y;
    cin >> x >> y;
    pair<int, int> s = make_pair(x,y);
    p.push_back(s);
  }
  vector<pair<int, int>> c;
  for(int i = 0; i < M; i++){
    int x, y;
    cin >> x >> y;
    pair<int, int> s = make_pair(x,y);
    c.push_back(s);
  }
   for(int i = 0; i < N; i++){
     int min_d = 1000000000;
     int ans = -1;
     for(int j = 0; j < M; j++){
       int d = abs(p.at(i).first - c.at(j).first) + abs(p.at(i).second - c.at(j).second);
       if(d < min_d){
         ans = j + 1;
         min_d = d;
       }
     }
     cout << ans << endl;
   }  
}
