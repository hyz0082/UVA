#include<iostream>
using namespace std;

int main(){
    int matrix[101][101],tmp, total = 0;
    int n;
    while(cin >> n){
    for(int x = 0; x < n; x++)
        for(int y = 0; y < n; y++){
            cin >> tmp;
            matrix[x][y] = tmp;
        }
    for(int x = 1; x < n; x++)
        for(int y = 0; y < n; y++)
            matrix[x][y] += matrix[x-1][y];
    int maxx = 0,current = 0;
    maxx = matrix[0][0];
    for(int x = n - 1; x >= 0; x--){
        current = 0;
        for(int t = 0; t < n; t++){
            current += matrix[x][t];
        if(current > maxx)
            maxx = current;
        if(current < 0)
            current = 0;
        }
        for(int y = 0; y < x; y++){
            current = 0;
            for(int t = 0; t < n; t++){
                current += matrix[x][t] - matrix[y][t];
                if(current > maxx)
                    maxx = current;
                if(current < 0)
                    current = 0;
            }
        }
    }
    cout << maxx << endl;
}
}

