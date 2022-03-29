#include<iostream>
#include<string>
#include <cstring>
using namespace std;

int main(){
    int x, y, init_x, init_y, cur_dir, next_x, next_y, bound_x, bound_y;
    bool ifLose = 0;
    int walk_map[51][51] = {0};
    string str;
    char direction[4] = {'E', 'S', 'W', 'N'}, space, direct;
    cin >> x >> y;
    while(cin >> init_x >> init_y >>  direct){
        switch (direct){
        case 'E':
            cur_dir = 0;
            break;
        case 'S':
            cur_dir = 1;
            break;
        case 'W':
            cur_dir = 2;
            break;
        case 'N':
            cur_dir = 3;
            break;
        }
        cin.ignore(1, '\n');
        getline(cin, str);
        ifLose = 0;
        bound_x = x; bound_y = y;
        next_x = init_x; next_y = init_y;
        for(int i = 0; i < str.length(); i++){
            if(str[i] == 'R'){
                cur_dir = (cur_dir+1)%4;
            }
            else if(str[i] == 'L'){
                cur_dir--;
                if(cur_dir < 0)
                    cur_dir = 3;
            }
            else{
                switch (cur_dir){
                case 0:
                    next_x = init_x+1;
                    break;
                case 1:
                    next_y = init_y-1;
                    break;
                case 2:
                    next_x = init_x-1;
                    break;
                case 3:
                    next_y = init_y+1;
                    break;
                }
                if(walk_map[init_x][init_y] == 1 && (next_x > bound_x || next_y > bound_y || next_x < 0 || next_y < 0) ){
                    next_x = init_x;
                    next_y = init_y;
                    continue;
                }
                if(next_x > bound_x || next_y > bound_y || next_x < 0 || next_y < 0){
                    ifLose = 1;
                    walk_map[init_x][init_y] = 1;
                    break;
                }
                init_x = next_x; init_y = next_y;
                //cout << init_x << " " << init_y << endl;
            }
        }
        cout << init_x << " " << init_y << " " << direction[cur_dir];
        if(ifLose == 1)
            cout <<  " LOST";
        cout << endl;
    }
}
