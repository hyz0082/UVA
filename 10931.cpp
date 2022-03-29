#include <iostream>
using namespace std;
#include<stack>
int main() {
  stack<int> s;
  long long int x, count, temp;
  cin >> x;
  while(x != 0){
    count = 0;
    temp = x;
    while( temp != 0){
      count += temp % 2;
      s.push( temp % 2 );
      temp /= 2;
    }
    cout << "The parity of ";
    while( !s.empty()){
      cout << s.top();
      s.pop();
    }
    cout << " is " << count << " (mod 2).\n";
    cin >> x;
  }
  
}