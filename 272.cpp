#include <iostream>
#include<string>
using namespace std;
int main() {
  string x;
  int a=0,b=0;
  while(getline(cin,x)){
      
    for(int w = 0;w<x.length();w++){
      if(x[w]=='"'){
        if(a==0){
          cout << "``";
          a = 1;
        }
        else{
          cout << "''";
          a = 0;
        }
      }
      else 
        cout << x[w];
    }
    cout << endl;
  }
}