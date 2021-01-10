#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<double> vx(N);
  vector<double> vy(N);
  for(int i = 0; i < N; i++){
    cin >> vx.at(i);
    cin >> vy.at(i);
  }
  
  vector<int> vo(N);
  for(int i = 0; i < N; i++){
    vo.at(i) = i;
  }
  double allsum = 0;
  double count = 0;
  do{
    double sum = 0;
    for(int i = 0; i < N-1; i++){
      int t1 = vo.at(i);
      int t2 = vo.at(i+1);
      double dx = pow(vx.at(t2) - vx.at(t1), 2);
      double dy = pow(vy.at(t2) - vy.at(t1), 2);
      double d = sqrt(dx + dy);
      sum+= d;
    }
    allsum += sum;
    count++;
  }while(next_permutation(vo.begin(), vo.end()));
  double ans = allsum / count;
  printf("%.10lf\n", ans);
}
