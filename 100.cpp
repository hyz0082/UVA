#include <iostream>
using namespace std;
int main() {
  long long int a,b,max=0,count=0,num,t,c;
  while(cin >> a >> b){
      max=0;
      cout << a << " " << b << " ";
      if(a>b){
        c=a;
        a=b;
        b=c;
      }
      for(;a<=b;a++){
        num=a;
        count=0;
        while(num!=1){
          if(num%2==0){
            num/=2;
            count++;
          }
          else{
            num=num*3+1;
            count++;
          }
        }
        count++;
        if(count>max) max=count;
      }
    cout << max << endl;
  }
}