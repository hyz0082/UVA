#include <iostream>
using namespace std;
int main() {
  long long int x, w, input,b1,b2;
  int s[] = {0,1,1,2,1,2,2,3,1,2};
  cin >> input;
  for(int e = 0; e < input; e++){
    cin >> x;
    w = x;
    b1 = 0; b2 = 0;
    while(w > 0){
      b1 += w%2;
      w /=2;
    }

    while(x > 0){
      b2 += s[x%10];
      x /= 10;
    }
    cout << b1 << " " << b2 << endl;
  }
}
