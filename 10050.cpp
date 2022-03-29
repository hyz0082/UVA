#include <iostream>
using namespace std;
int main() {
  int n, p[101], h = 0, d, pn;
  cin >> n;
  for(int x = 0; x < n; x++){
    cin >> d >> pn;
    for(int e = 0; e < pn; e++)
      cin >> p[e];
      h = 0;
      for(int td = 1; td <= d; td++){
        if(td % 7 == 6 || td % 7 == 0){
          continue;
        }
        for(int r = 0; r < pn; r++)
          if(td % p[r] == 0){
            h++;
            break;
          }
      }
      cout << h << endl;
  }

}