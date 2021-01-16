#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  map<int, int> m;
  for(int i = 0; i < N; i++){
    int num;
    cin >> num;
    if(m.count(num)){
      m[num]++;
    }else{
      m[num] = 1;
    }
  }
  int sum = 0;
  for(auto p : m){
    if(p.first < p.second){
      sum += p.second - p.first;
    }else if(p.first > p.second){
      sum += p.second;
    }
  }
  cout << sum << endl;
}
