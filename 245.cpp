#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector<string> v;
int main(){
    string x = "", input;
    char n;
    while(getline(cin, input) && input!= "0"){
        for(int i = 0;i < input.size(); i++){
            if(isalpha(input[i])){
                x += input[i];
                cout << input[i];
                continue;
            }
            else if(isdigit(input[i])){
                int k = input[i] - '0';
                if(isdigit(input[i+1])){
                    do{
                        i++;
                        //cout << input[i] << "^^";
                        k = k*10 + (input[i] -'0');
                        //cout << k << "((";
                    
                    }while(isdigit(input[i+1]));
                }
                //cout << "&&"<< k << endl;
                k--;
                string s = v[k];
                //cout << k << endl;
                cout << s;
                v.erase(v.begin() + k);
                v.insert(v.begin(), s);
                x = "";
            }
            else{
                vector<string>::iterator iter = find(v.begin(), v.end(), x);
                if(iter != v.end()){
                    v.erase(iter);
                }
                if(x == " " || x ==""){
                    cout << input[i];
                    continue;
                }
                //cout << "insert : " << x << endl;
                v.insert(v.begin(), x);
                x = "";
                cout << input[i];
            }
            // int rr = 0;
            // for(vector<string>::iterator it = v.begin(); it != v.end(); it++,rr++)
            //     cout << "/"<< rr << " " <<  *it <<" ";
            // cout << endl;
        }
        if(x != "" && isalpha(x[0])){
            v.insert(v.begin(), x);
            x = "";
        }   
        cout << endl; 
    }
}