#include <iostream>
using namespace std;
long long int input,a;
void cal(){
    while(input!=0){
      a+=input%10;
      input/=10;
    }
    input = a;
}

int main() {
  cin >> input;
  while(input!=0){
    while(input>=10){
      a=0;
      cal();
    }
    cout << input << endl;
    cin >> input;
  }
}