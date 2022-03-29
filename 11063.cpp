#include <iostream>
#include<cmath>
#include<set>
using namespace std;
int main() {
    set<int> x;
    x.clear();
    int count = 1,n;
    while(cin >> n){
      int s[n];
      for(int w = 0; w < n; w++){
        cin >> s[w];
      }
      for(int w = 0; w < n; w++){
        if(s[w]<=0)
          break;
        if(s[w]>=s[w+1] && w<n-1)
          break;
        for(int e = w; e < n ; e++)
          x.insert(s[w] + s[e]);
      }
      if(n==1 && s[0]<=0)
        cout << "Case #" << count <<": It is not a B2-Sequence." << endl;
      else if(x.size() == n*(n+1)/2)
        cout << "Case #" << count <<": It is a B2-Sequence." << endl;
      else
        cout << "Case #" << count <<": It is not a B2-Sequence." << endl;
      count++;
      x.clear();
      cout << endl;
    }
}
