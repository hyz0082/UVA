#include <iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main() {
  int a,num1,num2;
  bool jolly;
  vector<int> s;
  while(cin >> a){
    cin >> num1;
    if(a==1){
  		cout << "Jolly" << endl;
		continue;	
	}
    jolly=1;
    for(int x = 0;x<a-1;x++){
      cin >> num2;
      s.push_back(abs(num1-num2));
      num1=num2;
    }
    sort(s.begin(),s.end());
    for(int x = 1; x<a; x++){
      if(s[x-1]!=x)
        jolly = 0;
    }
    if(jolly)
      cout << "Jolly" << endl;
    else
      cout << "Not jolly" << endl;
    s.clear();
  }
  
}