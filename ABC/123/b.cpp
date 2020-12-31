#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<int> vec(5);
  for(int i = 0; i < 5; i++){
    cin >> vec.at(i);
  }
  sort(vec.begin(), vec.end());
  
  int ans = 10000;
  
  do{
    int sum = 0;
    for(int i = 0; i < 4; i++){
      int num = vec.at(i) % 10 == 0 ? vec.at(i) : vec.at(i) + (10 - vec.at(i) % 10);
      sum += num;
    }
    sum += vec.at(4);
    ans = min(ans, sum);
  }while(next_permutation(vec.begin(), vec.end()));
  
  cout << ans << endl;
}
         
