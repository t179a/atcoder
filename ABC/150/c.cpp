#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> vec(N);
  for(int i = 0; i < N; i++){
    vec.at(i) = i+1;
  }
  vector<int> va(N);
  vector<int> vb(N);
  for(int i = 0; i < N; i++){
    cin >> va.at(i);
  }
  for(int i = 0; i < N; i++){
    cin >> vb.at(i);
  }
  int oa, ob;
  int count = 0;
  do{
    if(vec == va){
      oa = count;
    }
    if(vec == vb){
      ob = count;
    }
    count++;
  }while(next_permutation(vec.begin(), vec.end()));
  cout << abs(oa - ob) << endl;
}
    
