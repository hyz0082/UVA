#include <iostream>
#include<map>
#include<string>
#include<cctype>
#include<cstring>
using namespace std;
int main() {
 string key = "`1234567890-=qwertyuiop[]asdfghjkl;'zxcvbnm,./";
 string input;
 getline(cin,input);
 int pos;
 for(int x = 0;x<input.size();x++){
   if(input[x]==' ') {cout << " ";}
   else{
    pos = key.find(tolower(input[x]));
    cout << key[pos-2];
   } 
 }
cout << endl;
}