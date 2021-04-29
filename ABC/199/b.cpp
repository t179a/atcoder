#include<bits/stdc++.h>
using namespace std;

int main(){
  int N; cin >> N;
  int max_a = 0;
  int min_b = 1000007;
  for(int i = 0; i < N; i++){
    int a; cin >> a;
    max_a = max(a, max_a);
  }
  for(int i = 0; i < N; i++){
    int b; cin >> b;
    min_b = min(b, min_b);
  }
  int ans = max(0, min_b - max_a + 1);
  cout << ans << endl;
}
