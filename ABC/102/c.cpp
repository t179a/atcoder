#include<bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> v;
  for(int i = 0; i < N; i++){
    int a;
    cin >> a;
    a -= (i+1);
    v.push_back(a);
  }
  sort(v.begin(), v.end());
  int b = v.at(N/2);
  int64_t ans = 0;
  for(int i = 0; i < N; i++){
    ans += abs(v.at(i) - b);
  }
  cout << ans << endl;
}
  
  
  
  
