#include <iostream>
#include<string>
using namespace std;
int main() {
  int date[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
  string q[] = {"Friday","Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday"};
  int input,m,d,total=0;
  cin >> input;
  for(int a = 0;a<input;a++){
      cin >> m >> d;
      total=0;
      for(int w = 0 ; w<m; w++){
        total+=date[w];  
      }
      total+=d;
      total%=7;
    
      cout << q[0+total] << endl;
  }
}