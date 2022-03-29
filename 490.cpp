#include <iostream>
#include<string>
using namespace std;
int main() {
  string a[1000];
  int x = 0,max=0;
  while(getline(cin,a[x])){
    if(a[x].length()>max)
      max = a[x].length();
    x++;
  }
  for(int e = 0;e<max;e++){
    for(int r = x-1;r>=0;r--){
      if(e>=a[r].length())
        cout << ' ';
      else 
        cout << a[r][e];
    }
    cout << endl;
  }

  
}