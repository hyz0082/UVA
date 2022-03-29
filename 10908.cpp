#include <iostream>
#include<cstdio>
using namespace std;
int check(int x, int y, int t, char u, char[][101]);
int main()
{
    int t, m, n, q;
    char o;
    cin >> t;
    for(int p = 0; p < t; p++){
        int qm[21][2] = {0};
        char x[101][101] = {'0'};
        cin >> m >> n >> q;
        cout << m << " " << n << " " << q << endl;
        cin.ignore(5,'\n');
        for(int w = 0; w < m; w ++){
            for(int u = 0; u < n; u++){
                cin >> o;
                x[w][u] = o;
            }
            cin.ignore(5,'\n');
        }
        for(int r = 0; r < q; r++)
            cin >> qm[r][0] >> qm[r][1];
        for(int r = 0; r < q; r++){
            int tt = 1,msize = 1, x1 = qm[r][0], y1 = qm[r][1];
            char o = x[qm[r][0]][qm[r][1]];
            while(check(x1, y1, tt, o, x)){
                tt++;
                msize+=2;
            }
            cout <<  msize << endl;
        }
    }

}

int check(int x, int y, int t, char u, char i[][101]){
    for(int d = x - t; d <= x + t; d++)
        for(int r = y - t; r <= y + t; r++)
            if(i[d][r] != u)
                return 0;
    return 1;
}
