#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<long> v;
vector<char> vchar;
int flag = 0;
int main(){
    while(1){
        v.clear();
        vchar.clear();
        char c; long k;
        string str;
        c = cin.peek();
        if(c==EOF)
            break;
        if(c=='+'||c=='-')
            cin >> c;
        cout << "www0";
        while(1){
            c = cin.peek();
            if(c <'9'&&c>'0'){
                cin >> k;
                v.push_back(k);
                if(flag==2)
                    *(v.end()-1)= -*(v.end()-1);
                flag = 0;
            }
            else if(c=='+'||c=='-'||c=='*'||c=='/'){
                cin >> c;
                if(flag==1){
                    flag=2;
                    continue;
                }
                vchar.push_back(c);
                flag = 1;
            }
            else if(c=='='){
                getline(cin,str);
                break;
            }
            else
                c = getchar();
        }
        for(vector<long>::iterator itert = v.begin();itert!=v.end();itert++)
            cout << *itert << " ";
        cout << endl;
        for(vector<char>::iterator itert = vchar.begin();itert!=vchar.end();itert++)
            cout <<*itert << " ";
        cout << endl;
        while(vchar.size()>=1){
            vector<char>::iterator iter = vchar.begin();
            for(;iter!=vchar.end();iter++)
                if(*iter=='*' || *iter=='/')
                    break;
            if(iter!=vchar.end()){
                int pos = iter - vchar.begin();
                vector<long>::iterator iter2 = v.begin() + pos;
                if(*iter=='*')
                    *iter2 = *(iter2)* *(iter2+1);
                else
                    *iter2 = *(iter2)/ *(iter2+1);
                v.erase(iter2+1);
                vchar.erase(iter);
            }
            else{
                if(*vchar.begin()=='+')
                    *v.begin() = *v.begin()+ *(v.begin()+1);
                else
                    *v.begin() = *v.begin()- *(v.begin()+1);
                    v.erase(v.begin()+1);
                    vchar.erase(vchar.begin());
            }
            int r = 0;
            for(vector<char>::iterator itr = vchar.begin();itr!=vchar.end();itr++){
                cout << *(v.begin()+r) << " " << *itr << " ";
                r++;
            }
            cout << *(v.end()-1) << " " << str << endl;
        }
    }
}