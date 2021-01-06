#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  set<int> s;
  vector<int> vec;
  for(int i = 0; i < N; i++){
    int price;
    cin >> price;
    if(s.count(price)){
      continue;
    }else{
      s.insert(price);
      vec.push_back(price);
    }
  }
  sort(vec.begin(), vec.end(), greater<int>());
  cout << vec.at(1) << endl;
}
