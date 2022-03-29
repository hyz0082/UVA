#include <iostream>
#include<sstream>
using namespace std;
int main() {
  long long int a,b,x1,x2,r;
  cin >> r;
  for(int x = 0; x < r; x++){
    cin >> x1 >> x2;
    a = (x1 + x2)/2;
    b = (x1 - x2)/2;
    if(a+b==x1 && a-b==x2 && b>=0)
      cout << a << " " << b << endl;
    else  
      cout << "impossible" << endl;
  }
}