#include<iostream>
#include<string>
#include<cstring>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
vector<long long int> x,tmp;
int main(){
    long long int c;
    tmp.push_back(1);
    x.push_back(1);
    while(x.size() <= 2000){
        sort(tmp.begin(), tmp.end());
        c = tmp.front();
        tmp.erase(tmp.begin());
        if(find(x.begin(), x.end(), c*2) == x.end()){
            x.push_back(c*2);
            tmp.push_back(c*2);
        }
        if(find(x.begin(), x.end(), c*3) == x.end()){
            x.push_back(c*3);
            tmp.push_back(c*3);
        }
        if(find(x.begin(), x.end(), c*5) == x.end()){
            x.push_back(c*5);
            tmp.push_back(c*5);
        }
    }
    sort(x.begin(), x.end() );
    cout << "The 1500'th ugly number is " << x[1499] << ".\n";
}