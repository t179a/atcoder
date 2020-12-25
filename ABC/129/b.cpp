#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> vec(N);
  int sum = 0;
  for(int i = 0; i < N; i++){
    cin >> vec.at(i);
    sum += vec.at(i);
  }
  int s1 = 0;
  int diff_min = sum;
  for(int i = 0; i < N; i++){
    s1 += vec.at(i);
    int s2 = sum - s1;
    diff_min = min(diff_min, abs(s2 - s1));
  }
  cout << diff_min << endl;
}
    
    
  
