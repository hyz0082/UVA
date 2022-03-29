#include <iostream>
#include<map>
#include<string>
#include<cctype>
#include<cstring>
using namespace std;
int main() {
  int a[27]={0};
  int input,num,max=1;
  cin >> input;
  cin.ignore(5,'\n');
  string s;
  for(int x =0;x<input;x++){
    getline(cin,s);
    for(int e=0;e<s.size();e++){
      if(isalpha(s[e])){
        s[e]=toupper(s[e]);
        a[s[e]-'A'+1]++;
        if(a[s[e]-'A'+1]>max) max=a[s[e]-'A'+1];
      }
    }
  }
  char w='A';
  for(;max>=1;max--){
    for(int rr=1;rr<=26;rr++,w='A'){
      if(a[rr]==max) {w=w+rr-1;cout << w << " " << a[rr] << endl;}
    }
  }

}