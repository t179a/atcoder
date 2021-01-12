#include <bits/stdc++.h>
using namespace std;

int main(){
  int64_t N;
  cin >> N;
  map<int64_t, int64_t> m;
  for(int i = 0; i < N; i++){
    int64_t num;
    cin >> num;
    m[num]++;
  }
  vector<int64_t> vec;
  for(auto p : m){
    if(p.second >= 2){
      vec.push_back(p.first);
    }
  }
  int64_t len_v = vec.size();
  if(len_v == 0){
    cout << 0 << endl;
    return 0;
  }
  if(len_v == 1){
    if(m[vec.at(0)] < 4){
      cout << 0 << endl;
      return 0;
    }else{
      cout << vec.at(0) * vec.at(0) << endl;
      return 0;
    }
  }
  sort(vec.begin(), vec.end(), greater<int>{});
  if(m[vec.at(0)] > 4){
    cout << vec.at(0) * vec.at(0) << endl;
    return 0;
  }else{
    cout <<vec.at(0) * vec.at(1) << endl;
    return 0;
  }
}
  
