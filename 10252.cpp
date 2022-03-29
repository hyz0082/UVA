#include <iostream>
#include<string>
using namespace std;
//mapt
int main() {
  string a,b;
  int g[27]={0},h[27]={0},min;
  char e;
  while(getline(cin,a)){
    getline(cin,b);
    //cin.ignore(5,'\n');
    for(int x = 0;x<a.size();x++){
        g[a[x]-'a'+1]++;
    }
    for(int x = 0;x<b.size();x++){
        h[b[x]-'a'+1]++;
    }
    for(int x = 1;x<=26;x++){
      if(g[x]>h[x])
        min = h[x];
      else 
        min = g[x];
        e = 'a'+x-1;
      for(int a = 1; a<=min;a++)
        cout << e; 
      
    }
    cout << endl;
     for(int x = 0;x<27;x++){
      g[x]=0;
      h[x]=0;
    }
  }
  
}