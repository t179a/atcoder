#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  set<string> ss;
  vector<string> vs(N);
  for(int i = 0; i < N; i++){
    string name;
    cin >> name;
    if(ss.count(name)){
      cout << "No" << endl;
      return 0;
    }
    ss.insert(name);
    vs.at(i) = name;
  }
  for(int i = 0; i < N-1; i++){
    int len_f = vs.at(i).size();
    if(vs.at(i).at(len_f-1) != vs.at(i+1).at(0)){
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}
