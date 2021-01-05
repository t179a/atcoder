#include <bits/stdc++.h>
using namespace std;

int main(){
  double N;
  cin >> N;
  vector<double> vec(N, 0);
  for(int i = 0; i < N; i++){
    cin >> vec.at(i);
  }
  sort(vec.begin(), vec.end(), greater<int>());
  double ans = 0;
  for(int i = 0; i < N; i++){
    double area = M_PI * vec.at(i) * vec.at(i);
    if(i % 2 == 0){
      ans += area;
    }else{
      ans -= area;
    }
  }
  printf("%.10lf\n", ans);
}
    
  
  
