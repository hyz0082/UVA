#include <iostream>
#include<cstdlib>
#include<string>
using namespace std;
long long int g(string &e){
  long long int r = 1, total = 0;
  for(int x = e.size()-1; x >= 0; x--,r *= 2){
    total += (e[x]-'0')*r;
  }
  return total;
}
int gcd(long long int a,long long int b){
  return (a%b) ? gcd(b, a % b) : b;
}
int main() {
  long long int x1, x2,c = 1,w;
  string ss, ee;
  int x;
  cin >> x;
  cin.ignore(1,'\n');
  for(int s = 0; s < x; s++){
    getline(cin, ss);
    getline(cin, ee);
    x1 = g(ss);
    x2 = g(ee);
    w = gcd(x1, x2);
    cout << "Pair #" << c << ": ";
    c++;
    cout << ((w != 1) ? "All you need is love!\n" : "Love is not all you need!\n");
  }
}