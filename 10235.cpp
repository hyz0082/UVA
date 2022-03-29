#include <iostream>
#include<sstream>
#include<string>
#include<algorithm>
#include<cstdlib>
#include<cmath>
using namespace std;
int main() {
  string x;
  long long int s1, s2, f = 0, t;
  while(getline(cin, x)){
    s1 = atoi(x.c_str());
    reverse(x.begin(), x.end());
    s2 = atoi(x.c_str());
    for(f = 0, t = 2; t < sqrt(s1)+1; t++)
      if(s1 % t ==0){
        f = 1;
        break;
      }
    if(f == 1 && s1 !=2)
      cout << s1 << " is not prime.\n";
    else{
      for(f = 0, t = 2; t < sqrt(s2)+1; t++)
      if(s2 % t ==0 || s1 == s2){
        f = 1;
        break;
      }
      if(f == 1 || s1 == 2)
        cout << s1 << " is prime.\n";
      else
        cout << s1 << " is emirp.\n";
    }
  }
}
