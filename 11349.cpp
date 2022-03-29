#include <iostream>
#include<string>
#include<cmath>
using namespace std;
int main() {
    long long int input,a,b,count = 1,flag;
    string w;
    cin >> input;
    for(int x = 0; x < input; x++){
      flag = 0;
      cin.ignore(15,'=');
      cin >> a;
      long long int m[a*a];
      for(int s = 0;s < a*a; s++){
        cin >> m[s];
      }
      for(int s = 0; s < a*a; s++)
        if(m[s]!=m[a*a-s-1] || (m[s]<0)){
          flag = 1;
          break;
        }
      if(flag==1)
        cout << "Test #"  << count<< ": Non-symmetric." << endl;
    
      else
        cout << "Test #"  << count<< ": Symmetric." << endl;
      count++;
    }
    
  
}