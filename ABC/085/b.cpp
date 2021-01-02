#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  set<int> S;
  for(int i = 0; i < N; i++){
    int num;
    cin >> num;
    S.insert(num);
  }
  cout << S.size() << endl;
}
