#include <iostream>
#include<cmath>
using namespace std;
int main() {
    long long int a,b,count;
    cin >> a >> b;
    while(!(a==0 && b==0)){
      count = 0;
      int x = sqrt(a);
      while((x*x) <= b){
        if((x*x)>=a){
          count++;
        }
        x++;
      }
      cout << count << endl;
      cin >> a >> b;
    }
}