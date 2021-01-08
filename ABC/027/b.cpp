#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  int sum = 0;
  vector<int> vec(N);
  for(int i = 0; i < N; i++){
    cin >> vec.at(i);
    sum+= vec.at(i);
  }
  if(sum % N != 0){
    cout << -1 << endl;
    return 0;
  }
  int ans = 0;
  for(int i = 0; i < N-1; i++){
    int left = 0;
    for(int j = 0; j <= i; j++){
      left += vec.at(j);
    }
    int right = sum - left;
    if(left/(i+1) != right/(N-i-1)){
      ans++;
    }
  }
  cout << ans << endl;
    
      
}
