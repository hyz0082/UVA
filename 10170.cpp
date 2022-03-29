#include <iostream>
#include<cmath>
using namespace std;
int main() {
  long long int a,b;
  while(cin >> a >> b){
    while(b>0){
      b-=a;
      a++;
    }
    cout << --a << endl;
  }
}