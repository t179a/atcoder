#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  map<string, int> vote;
  for(int i = 0; i < N; i++){
    string name;
    cin >> name;
    vote[name]++;
  }
  string name;
  int sum = -1;
  for(auto p: vote){
    if(p.second >= sum){
      sum = p.second;
      name = p.first;
    }
  }
  cout << name << endl;
}
  
