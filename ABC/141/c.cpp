#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, K, Q;
  cin >> N >> K >> Q;
  vector<int> have_p(N, K-Q);
  for(int i = 0; i < Q; i++){
    int winner;
    cin >> winner;
    have_p.at(winner - 1) += 1;
  }
  for(int i = 0; i < N; i++){
    if(have_p.at(i) > 0){
      cout << "Yes" << endl;
    }else{
      cout << "No" << endl;
    }
  }
}
  
    
