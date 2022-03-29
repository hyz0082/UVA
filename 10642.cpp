#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>
using namespace std;
int main(){
    long long int x, y ,a[200000], t = 0, o1, o2;
    for(int f = 0; f < 200000; f++){
        t += f;
        a[f] = t;
    }
    cin >> t;
    for(int w = 0; w < t; w ++){
         cin >> x >> y;
         o1 = a[x+y]+x;
         cin >> x >> y;
         o2 = a[x+y]+x;
         cout << "Case " << w+1 << ": " << abs(o2 - o1) << endl;
    }

}
