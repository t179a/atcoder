#include <bits/stdc++.h>
using namespace std;

int main(){
  int64_t N, M; cin >> N >> M;
  vector<int64_t> A;
  A.push_back(0);
  for(int i = 0; i < M; i++){
    int64_t a; cin >> a;
    A.push_back(a);
  }
  A.push_back(N+1);
  sort(A.begin(), A.end());
  int64_t width = 1000000007;
  for(int i = 0; i < (int) A.size()-1; i++){
    if(A.at(i + 1) - A.at(i) - 1 <= 0) continue;
    width = min(width, A.at(i+1) - A.at(i) - 1);
  }
  //cout << "width :" << width << endl;
  int64_t ans = 0;
  for(int i = 0; i < (int) A.size()-1; i++){
    if(A.at(i+1) - A.at(i) - 1 <= 0) continue;
    ans += ((A.at(i+1) - A.at(i) - 1) + width - 1)/width;
    //cout << ans << endl;
  }
  cout << ans << endl;
  
}
    
  
