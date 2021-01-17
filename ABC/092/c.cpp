#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> vec;
  vec.push_back(0);
  for(int i = 0; i < N; i++){
    int a;
    cin >> a;
    vec.push_back(a);
  }
  vec.push_back(0);
  
  int sum = 0;
  for(int i = 0; i < N+1; i++){
    sum += abs(vec.at(i+1) - vec.at(i));
  }
  for(int i = 1; i < N+1; i++){
    int ans = sum;
    int n_min = min(vec.at(i-1), vec.at(i+1));
    int n_max = max(vec.at(i-1), vec.at(i+1));
    if(vec.at(i) >= n_min && vec.at(i) <= n_max){
      cout << ans << endl;
    }else{
      ans -= abs(vec.at(i+1) - vec.at(i));
      ans -= abs(vec.at(i) - vec.at(i-1));
      ans += abs(vec.at(i+1) - vec.at(i-1));
       cout << ans << endl;
    }
  }
}
  
