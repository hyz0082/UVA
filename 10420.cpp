#include <iostream>
#include<map>
#include<string>
using namespace std;
int main() {
  map<string,int> s;
  int a;
  string u,name;
  cin >> a;
  for(int x =0;x<a;x++){
      cin >> u;
      s[u]++;
      getline(cin,name);
  }
  for(auto r : s) cout << r.first << " " << r.second << endl;
}