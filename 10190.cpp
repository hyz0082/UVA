#include <iostream>
#include<cmath>
#include<cstdlib>
using namespace std;
long long int c(long long int q, long long int w){
  long long int tt, y;
  for(tt = 1, y = 0; y < w; y++)
    tt *= q;
  return tt;
}
int main() {
  long long int n, m, t, i;
  while(cin >> n >> m){
    if(n <= 1 || m <= 1 || n < m){
      cout << "Boring!\n";
      continue;
    }
    i = 0;
    for(t = 1; i < n; t++)
        i = c(m,t);
    if(i == n){
      while(n > 1){
        cout << n << " ";
        n /= m;
      }
      cout << "1\n";
    }
    else
      cout << "Boring!\n";
  }
}
