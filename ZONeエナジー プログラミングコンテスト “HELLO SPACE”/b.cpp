#include<bits/stdc++.h>
using namespace std;

int main(){
  int N, D, H; cin >> N >> D >> H;
  double ans = 0;
  for(int i = 0; i < N; i++){
    int d, h; cin >> d >> h;
    double a = (double) (H - h)/ (double) (D - d);
    double result = h - a * d;
    if(ans < result){
      ans = result;
    }
  }
  printf("%.10lf", ans);
}
