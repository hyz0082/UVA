#include<iostream>
#include<string>
using namespace std;
int main(){
   long long int a,b;
   long long int count=0,x,y,m,n,next=0;
   cin >> a >> b;
   while(a!=0||b!=0){
     m=a;
     n=b;
     while(m!=0 || n!=0){
      x=m%10;
      y=n%10;
      if(x+y+next>=10){count++;next=1;}
      else next=0;
      m/=10;
      n/=10;
     }
     next=0;
     if(count==0) cout << "No carry operation." << endl;
     else if(count==1) cout << "1 carry operation." << endl;
     else cout << count << " carry operations." << endl;
     count=0;
     cin >> a >> b;
   }
   cout << endl;
}