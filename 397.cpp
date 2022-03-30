#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;
vector<long> v;
vector<char> vchar;
int flag = 0,f2=0;
int main(){
    string str,str2;
    while(getline(cin,str)){
        if(str=="")
            break;
        str2 = str;
        int cont = 0;
        for(int i = 0; i < str.length(); i++){
            if(cont==1 && str[i]=='+'){
                cont = 0;
                continue;
            }
            if(str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='/')
                cont = 1;
            else if(str[i]!=' ')
                cont = 0;
            cout << str[i];
        }
        cout << endl;
        stringstream s1;
        s1.str("");
        s1.clear();
        s1 << str;
        //cout << str << endl;
        v.clear();
        vchar.clear();
        char c; long k;
        c = s1.peek();
        if(c=='+'||c=='-'){
            s1 >> c;
        }
        char tmp;
        while(1){
            c = s1.peek();
            if(c==EOF)
                break;
            if(c <='9'&&c>='0'){
                s1 >> k;
                v.push_back(k);
                //cout << "num:" << k << endl;
                if(flag==2){   
                    if(tmp=='-'){
                        *(v.end()-1)= -*(v.end()-1);
                    }
                }
                flag = 0;
            }
            else if(c=='+'||c=='-'||c=='*'||c=='/'){
                s1 >> c;
                tmp = c;
                if(flag==1){
                    flag=2;
                    continue;
                }
                vchar.push_back(c);
                flag = 1;
            }
            else if(c=='='){
                getline(s1,str);
                break;
            }
            else
                s1.get(c);
        }
        // for(vector<long>::iterator iter = v.begin();iter!=v.end();iter++)
        //     cout << *iter << " ";
        // cout << endl;
        // for(vector<char>::iterator iter = vchar.begin();iter!=vchar.end();iter++)
        //     cout << *iter << " ";
        // cout << endl;
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
        cout << endl;
    }
}