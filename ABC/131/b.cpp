#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, L;
  cin >> N >> L;
  vector<int> vec(N);
  for(int i = 0; i < N; i++){
    vec.at(i) = L + i;
  }
  int sum_all = 0;
  for(int i = 0; i < N; i++){
    sum_all += vec.at(i);
  }
  vector<int> sum_part(N);
  for(int i = 0; i < N; i++){
    sum_part.at(i) = sum_all - vec.at(i);
  }
  int ans;
  int mindiff = 1000000;
  for(int i = 0; i < N; i++){
    if(abs(sum_all - sum_part.at(i) < mindiff)){
      mindiff = min(mindiff, abs(sum_all - sum_part.at(i)));
      ans = sum_part.at(i);
    }
  }
  cout << ans << endl;
}
                  
    
