#include <iostream>
#include<string>
using namespace std;
int f(string&);
int f(int);
int main() {
  string x;
  getline(cin, x);
  while(x !="0"){
    int s = f(x), count = 1;
    while(s>=10){
      s = f(s);
      count++;
    }
    if(s == 9)
      cout << x << " is a multiple of 9 and has 9-degree " << count <<  ".\n";
    else
      cout << x << " is not a multiple of 9.\n";
    cin >> x;
  }
}
int f(int x){
  int y = 0;
  while(x > 0){
    y += x % 10;
    x /=10;
  }
  return y;
}
int f(string &a){
  int s = 0;
  for(int x = 0; x < a.size(); x++){
    s +=a[x] -'0';
  }
  return s;
}
