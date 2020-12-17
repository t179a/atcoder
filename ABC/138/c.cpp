#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> vec(N);
  for(int i = 0; i < N; i++){
    cin >> vec.at(i);
  }
  sort(vec.begin(), vec.end());
  double ans = (vec.at(0) + vec.at(1))/2.0;
  for(int i = 2; i < N; i++){
    ans = (double) (ans + vec.at(i))/2.0;
  }
  printf("%.10f\n", ans);
}
                    
    
