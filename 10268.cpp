#include <iostream>
#include<sstream>
using namespace std;
int main() {
  stringstream m;
  long long int a,b,x,n,count,ans;
  string u;
  while(cin >> x){
    cin.ignore(5,'\n');
    getline(cin, u);
    m.str("");
    m.clear();
    m << u;
    count = 0;
    ans = 0;
    while(m >> a){
      count++;
    }
    m.str("");
    m.clear();
    m << u;
    m >> a;
    ans = a*(count-1)*x;
    while(m >> a){
      count--;
      ans = (ans+a*(count-1))*x;
    }
    ans /= x*x;
    cout << ans << endl;
  }
}