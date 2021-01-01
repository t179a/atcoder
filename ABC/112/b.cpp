#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, T;
  cin >> N >> T;
  vector<int> vec;
  for(int i = 0; i < N; i++){
	int cost, time;
    cin >> cost >> time;
    if(time <= T){
      vec.push_back(cost);
    }
  }
  sort(vec.begin(), vec.end());
  string ans = "TLE";
  int len = vec.size();
  if(len != 0){
	ans = to_string(vec.at(0));
  }
  cout << ans << endl;
  
}
