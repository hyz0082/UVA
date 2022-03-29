#include <iostream>
using namespace std;

int bigmode(int B,int P,int M){
    if(P == 0)
        return 1;
    if(P==1)
        return B % M;
    if(P%2==0)
        return ((bigmode(B,P/2,M)% M) * (bigmode(B,P/2,M)%M))%M;
    else
        return ((bigmode(B,P/2,M)%M) * (bigmode(B,P/2+1,M)%M))%M;
}
int main(){
    long long B,P,M,tmp;
    while(cin >> B >> P >> M){
        cout << bigmode(B,P,M) << endl;
    }
}