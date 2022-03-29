#include<iostream>
#include<vector>
using namespace std;

int main(){
    int king, queen , move;
    while(cin >> king >> queen >> move){
        //cout <<  king << " " << queen <<" " << move << endl;
        if(king == queen){
            cout << "Illegal state\n";
            continue;
        }
        if(move==queen){
            cout << "Illegal move\n";
            continue;
        }
        int queenrow = (int)(queen/8), queencol = queen % 8;
        int kingrow  = (int)(king/8), kingcol = king % 8;
        int moverow  = (int)(move/8), movecol = move % 8;
        if( queenrow != moverow &&  queencol != movecol){
            cout << "Illegal move\n";
            continue;
        }
        int direct;
        if(queenrow == moverow){
            if(queencol < movecol)
                direct = 4;
            else    
                direct = 2;
        }
        if(queencol == movecol){
            if(queenrow < moverow)
                direct = 3;
            else    
                direct = 1;
        }
        if(direct== 4 || direct == 2){
            int d = (direct==4)? 1 : -1;
            while(queen != move){
                queen += d;
                if(queen == king){
                    cout << "Illegal move\n";
                    break;
                }
            }
            if(queen==king)
                continue;
        }
        if(direct== 3 || direct == 1){
            int d = (direct==3)? 8 : -8;
            while(queen != move){
                queen += d;
                if(queen == king){
                    cout << "Illegal move\n";
                    break;
                }
            }
            if(queen==king)
                continue;
        }
        if( (move == king -1 && king%8 !=0)|| (move == king +1 && king%8 !=7)|| move == king -8 || move == king +8){
            cout << "Move not allowed\n";
            continue;
        }
        if(king==0 && move==9 || king==7 && move==14 || king==56 && move==49 || king==63 && move==54){
            cout << "Stop\n";
            continue;
        }
        cout << "Continue\n";
    }
    //cout << endl;
}
