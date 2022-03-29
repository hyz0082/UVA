#include <iostream>
#include<string>
using namespace std;
int GCD(int, int);
int main(){
  int G=0,N;
  cin >> N;
  while(N != 0){
    G = 0;
    for(int i=1;i<N;i++)
      for(int j=i+1;j<=N;j++)
        G+=GCD(i,j);
    cout << G << endl;
    cin >> N;
  }
}
int GCD(int i, int j){
  return (j) ? GCD(j, i % j) : i;
}
