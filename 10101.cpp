#include <iostream>
using namespace std;
#include<string>
#include<cmath>
#include<iomanip>
//’kuti’ (10000000), ’lakh’ (100000), ’hajar’ (1000), ’shata’ (100)
void cal(long long int a){
  if(a>1000000000) cal(a/10000000);
  if(a/10000000!=0) if((a/10000000)%100!=0) cout  << " "<< (a/10000000)%100 << " kuti"; else cout << " kuti";
      a%=10000000;
      if(a/100000!=0) cout << " " << a/100000 << " lakh" ;
      a%=100000;
      if(a/1000!=0) cout  << " " << a/1000 << " hajar" ;
      a%=1000;
      if(a/100!=0) cout << " "<< a/100 << " shata" ;
  }
int main() {
  long long int a,b=1;
  while(cin >> a){
      cout  << ""<< setw(4) << b << ".";
      b++;
      cal(a);
      if(a==0) cout << " 0" << endl;
      else if((a%100)!=0)
      cout << " " << a%100 << endl;
      else cout << endl;
  }
}