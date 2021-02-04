#include <bits/stdc++.h>
using namespace std;
string s;
int K;
set<string> ss;
vector<string> vs;
void subs(int p){
  for(int i = 0; i < (int)s.size() - p+1; i++){
    string s1 = s.substr(i, p);
    if(ss.count(s1)) continue;
    vs.push_back(s1);
    ss.insert(s1);
  }
}
int main() {
  cin >> s;
  cin >> K;
  int len = s.size();
  int q = min(5, (int)s.size());
  for(int j = 1; j <= q; j++){
    subs(j);
  }
  sort(vs.begin(), vs.end());
  cout << vs.at(K-1) << endl;
}
    
