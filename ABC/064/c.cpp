#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> vec(N);
  for(int i = 0; i < N; i++){
    cin >> vec.at(i);
  }
  set<int> s;
  int sum = 0;
  for(int i = 0; i < N; i++){
    int color = vec.at(i) / 400;
    if(color >= 8){
      sum++;
      continue;
    }
    s.insert(color);
  }
  int len = s.size();
  int a_min = max(len, 1);
  int a_max = len + sum;
  cout << a_min << " " << a_max << endl;
}
  
