#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main() {
  double a,p,q,r,rate,k,n,x,pro;
  cin >> x;
  for(int w = 0; w<x; w++){
    cin >> n >> p >> k;
    if(p==0){
      cout << "0.0000" << endl;
      continue;
    }
    q = 1.0 - p;
    r = pow(q, n);
    a = pow(q,k-1.0)*p;
    pro = a * (1.0-pow(r,1000)) / (1.0 - r);
    cout << fixed << setprecision(4) <<  pro << endl;
  }
}