#include <iostream>
#include<vector>
using namespace std;
int main() {
  vector<int> i;
  long long int a[37], input, count, num, min, t, time = 1;
  cin >> input;
  for(int x = 0; x < input; x ++){
    for(int q = 0; q < 36; q++)
      cin >> a[q];
    cin >> num;
    for(int r = 0; r < num; r++){
      cin >> t;
      i.push_back(t);
    }
    cout << "Case "<< time << ":\n";
      time++;  
    for(int k = 0; k < num; k++){
      long long int v[37] ={0};
      min = 999999999;
      for(int rr = 2; rr <=36; rr++){
        t = i[k];
        while( t != 0){
          v[rr] += a[t % rr];
          t /= rr;
        }
        if(v[rr] <= min)
          min = v[rr];
      }
      cout << "Cheapest base(s) for number " << i[k] << ":";
      for(int y = 2; y <=36; y++)
        if(v[y] == min)
          cout << " " << y;
      cout << endl;
    }
    i.clear();
    if(x != input-1)
      cout << endl;
  }
}