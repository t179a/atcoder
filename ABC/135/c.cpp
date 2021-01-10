#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> city(N+1);
  vector<int> hero(N);
  for(int i = 0; i < N+1; i++){
    cin >> city.at(i);
  }
  for(int i = 0; i < N; i++){
    cin >> hero.at(i);
  }
  int64_t ans = 0;
  for(int i = 0; i < N; i++){
    if(city.at(i) <= hero.at(i)){
      ans += city.at(i);
      hero.at(i) -= city.at(i);
      city.at(i) = 0;
    }else{
      ans += hero.at(i);
      city.at(i) -= hero.at(i);
      hero.at(i) = 0;
    }
    if(city.at(i+1) <= hero.at(i)){
      ans += city.at(i+1);
      hero.at(i) -= city.at(i+1);
      city.at(i+1) = 0;
    }else{
      ans += hero.at(i);
      city.at(i+1) -= hero.at(i);
      hero.at(i) = 0;
    }
  }
  cout << ans << endl;
}
  
