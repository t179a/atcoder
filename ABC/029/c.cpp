#include <bits/stdc++.h>
using namespace std;
int N;
vector<string> v;
void dfs(int i,string s){
  if(i==N){
    v.push_back(s);
    return;
  }
  dfs(i+1,s + 'a');
  dfs(i+1,s + 'b');
  dfs(i+1,s + 'c');
}

int main(){
  cin >> N;
  dfs(0, "");
  for(int i = 0; i < (int) v.size(); i++){
    cout << v.at(i) << endl;
  }
  
}
  
