#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  map<int, int> num_order;
  for(int i = 0; i < N; i++){
	int order;
    cin >> order;
    num_order[order] = i+1;
  }
  for(int i = 0; i < N; i++){
    if(i == N-1){
      cout << num_order[i+1] << endl;
    }else{
      cout << num_order[i+1] << " ";
    }
  }
}
