#include <iostream>
#include<sstream>
using namespace std;
int main() {
  long long int a,b,x,ans,d = 1;
  cin >> x;
  for(int w = 0; w < x; w++){
    cin >> a >> b;
    ans = 0;
    if(a%2==0)
      a++;
    while(a<=b){
      ans+=a;
      a+=2;
    }
   
      cout << "Case " << d << ": " << ans << endl;
      d++;
  }
}