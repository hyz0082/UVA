#include <iostream>
#include<string>
using namespace std;
int main() {
  string s;
  long long int sum,max,temp,i;
  while(getline(cin, s)){
    sum = 0;
    max = 0;
    for(int w = 0; w < s.size(); w++){
      if(s[w]>='0' && s[w]<='9')
        temp = s[w] - '0';
      else if(s[w]>='A' && s[w]<='Z')
        temp = s[w] - 'A' + 10;
      else if(s[w] >= 'a' && s[w] <= 'z')
        temp = s[w] - 'a' + 36;
      else 
        continue;
      sum += temp;
      if(temp > max)
        max = temp;
    }
    for(i = max; i <62; i++){
      if(s=="0" || sum == 0){
        cout << "2" << endl;
        break;
      }
      if(!(sum%i)){
        cout << i+1 << endl;
        break;
      }
    }
    if(i==62)
      cout << "such number is impossible!" << endl;
  }
}