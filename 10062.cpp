#include <iostream>
#include<vector>
#include<map>
#include<string>
#include<algorithm>
using namespace std;
int main() {
  int d, w,flag = 0;
  string s;
  map<int, int> m;
  while(getline(cin, s)){
    w = 0;
    if(flag == 1)
        cout << endl;
    flag = 1;
    int i1[1001] = {0}, i2[1001] = {0};
    for(auto t = s.begin(); t != s.end(); t++){
      d = *t;
      m[-d]++;
    }
    for(map<int,int>:: iterator t=m.begin() ; t != m.end(); t++,w++){
      i1[w] = -t->first;
      i2[w] = t->second;
    }
    for(int u = 0; u < w - 1; u++)
      for(int r = u+1; r < w; r++){
        if(i2[u] > i2[r]){
          swap(i1[u], i1[r]);
          swap(i2[u], i2[r]);
        }

      }
       for(int u = 0; u < w - 1; u++)
        for(int r = u+1; r < w; r++)
            if(i2[u] == i2[r] && i1[u] < i1[r]){
                swap(i1[u], i1[r]);
        }

        for(int r = 0;r < w; r++)
            cout << i1[r] << " " << i2[r] << endl;
    m.clear();
  }
}
