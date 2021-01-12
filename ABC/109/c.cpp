#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, X;
  cin >> N >> X;
  vector<int> vec(N);
  for(int i = 0; i < N; i++){
    cin >> vec.at(i);
  }
  if(N == 1){
    cout << abs(vec.at(0) - X) << endl;
    return 0;
  }
  int g = gcd(abs(vec.at(1) -X), abs(vec.at(0)-X));
  for(int i = 2; i < N; i++){
    g = gcd(g, abs(vec.at(i) - X));
  }
  cout << g << endl;
}
