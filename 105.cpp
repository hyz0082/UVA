#include<iostream>
using namespace std;

int main(){
    int heigh[15500] = {0};
    int x,h,y,tmp, maxx = 0,minn = 999;
    while(cin >> x >> h >> y){
            if(x==0) break;
            if(y > maxx)
                maxx = y;
            if(minn > x)
                minn = x;
            for(int a = x; a < y; a++){
                if(heigh[a] < h)
                    heigh[a] = h;
            }
    }
    cout << minn << " " << heigh[minn];
    int current = heigh[minn];
    for(int a = minn; a < maxx; a++){
        if(heigh[a] != current){
            cout << " " << a << " " << heigh[a];
            current = heigh[a];
        }
    }
    cout << " " << maxx << " 0\n";
}
