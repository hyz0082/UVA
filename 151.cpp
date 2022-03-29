#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int main(){
    int x;
    while(cin >> x && x){
        if(x==13){
            cout << "1\n";
            continue;
        }
        for(int step = 2; step < x; step++){
            v.clear();
            for(int i = 2; i <= x; i++)
                v.push_back(i);
            vector<int>::iterator iter = v.begin();
            int frt = 1;
            while(v.size() > 1){
                for(int i = 0; i < step; i++){
                    iter += 1;
                    if(iter == v.end())
                        iter = v.begin();
                }
                if(frt == 1)
                    iter--;
                frt = 0;
                v.erase(iter);
                iter--;
            }
            if(v[0] == 13){
                cout << step << endl;
                break;
            }
        }
    }
}