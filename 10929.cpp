#include <iostream>
using namespace std;
#include<string>
#include<cmath>
int main() {
  string a;
  int x=0,y=0;
  cin >> a;
  while(a!="0"){
      for(int s=0;s<a.size();s++){
        if(s==0||s%2==0) x+=(a[s]-'0');
        else y+=a[s]-'0';
      }
      if(abs(x-y)==0||abs(x-y)%11==0)
        cout << a << " is a multiple of 11." << endl;
      else cout << a << " is not a multiple of 11." << endl;
    cin >> a;
    x=0;y=0;
  }
}