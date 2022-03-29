#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>
using namespace std;
int main(){
    double a, b, t;
    double pi = 2 * acos(0);
    string s;
    while(cin >> a >> b){
        cin >> s;
        cin.ignore(5,'\n');
        a += 6440;
        if(b > 360)
            b = (int)b % 360;
        if(b > 180)
        b = 360 - b;
        if(s == "min")
          b /= 60.0;
        t = 2 * a * pi * b / 360;
        cout << fixed << setprecision(6) << t << " ";
        t = sin(b / 180 * pi / 2) * 2 * a;
        cout << t << endl;
    }
}
