#include <iostream>
using namespace std;
int main() {
  long long int a[39], input, m;
  bool flag = 0;
  a[0] = 1;
  a[1] = 2;
  for(int x = 2; x < 39; x++){
    a[x] = a[x-1] + a[x-2];
  }
  cin >> input;
  for(int x = 0; x < input; x++){
    cin >> m;
    flag = 0;
    cout << m << " = ";
    for(int w = 38; w>=0; w--){
      if(m - a[w]>=0){
        cout << "1";
        m -= a[w];
        flag = 1;
      }
      else if(flag == 1)
        cout << "0";
    }
    cout << " (fib)\n";
  }
}
