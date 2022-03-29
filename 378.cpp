#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <limits>
using namespace std;
double inf = numeric_limits<double>::max();;
int main(){
    int k;
    cin >> k;
    cout << "INTERSECTING LINES OUTPUT\n";
    for(int i = 0; i < k; i++){
        double x1,x2,x3,x4,y1,y2,y3,y4;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
        double a = (y2-y1)/(x2-x1);
        double c = (y4-y3)/(x4-x3);
        double b = y1 - a*x1;
        double d = y3 - c*x3;
        if(x2==x1)
            a = numeric_limits<double>::max();
        if(x3==x4)
            c = numeric_limits<double>::max();
        if(a==c && c == 0){ // horizon
            if(b==d)
                cout << "LINE\n";
            else    
                cout << "NONE\n";
            continue;
        }
        if(a==c&&c==inf){
            if(x1==x3)
                cout << "LINE\n";
            else
                cout << "NONE\n";
            continue;
        }
        if(a==inf && c==0 || a==0&&c==inf){
            if(a==inf)
                printf("POINT %.2lf %.2lf\n", x1, y3);
            else
                printf("POINT %.2lf %.2lf\n", x3, y1);
            continue;
        }
        if(a==0){
            printf("POINT %.2lf %.2lf\n", (y1-d)/c, y1);
            continue;
        }
        if(c==0){
            printf("POINT %.2lf %.2lf\n", (y3-b)/a, y3);
            continue;
        }
        if(a==inf){
            printf("POINT %.2lf %.2lf\n", x1, x1*c+d);
            continue;
        }
        if(c==inf){
            printf("POINT %.2lf %.2lf\n", x3, x3*a+b);
            continue;
        }
        if(a==c ){
            if(b==d)
                cout << "LINE\n";
            else
                cout << "NONE\n";
            continue;
        }
        double diff = a/c;
        double int_y = (b-diff*d)/(1-diff);
        double int_x = (int_y-b)/a;
        printf("POINT %.2lf %.2lf\n", int_x, int_y);
        
    }
    cout << "END OF OUTPUT\n";
}