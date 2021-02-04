#include <bits/stdc++.h>
using namespace std;

int main() {
  int N; cin >> N;
  vector<int> C, S, F;
  for(int i = 0; i < N-1; i++){
    int c, s, f;
    cin >> c >> s >> f;
    C.push_back(c);
    S.push_back(s);
    F.push_back(f);
  }
  for(int i = 0; i < N-1; i++){
    int sum = S.at(i) + C.at(i);
    for(int j = i+1; j < N-1; j++){
      int s1 = S.at(j);
      while(sum > s1){
        s1 += F.at(j);
      }
      sum = sum + (s1 - sum) + C.at(j);
    }
    cout << sum << endl;
  }
  cout << 0 << endl;
  
}
    
