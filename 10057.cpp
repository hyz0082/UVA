#include <iostream>
#include<vector>
#include<cstdlib>
#include<map>
#include<algorithm>
using namespace std;
int main() {
  int x,t,size1;
  map<int, int> m;
  vector<int> d;
  while(cin >> x){
   int o1 = 0, o2 = 0, o3 = 0;
   d.push_back(0);
   for(int e = 0; e < x; e++){
     cin >> t;
     d.push_back(t);
     m[t]++;
   }
   sort(d.begin(), d.end());
    size1 = d.size()-1;
    if(size1%2 == 0){
      o1 = d[size1/2];
      o3 = d[size1/2+1] - d[size1/2]+1;
      for(int e = d[size1/2]; e <= d[size1/2+1]; e++){
        o2+=m[e];
      }
    }
    else{
      o1 = d[(size1+1)/2];
      o2 = m[o1];
      o3 = 1;
    }
    cout << o1 << " " << o2 << " " << o3 << endl;
    d.clear();
    m.clear();
  }
}
