#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(){
    string inp;
    vector <string> v;
    int maxl = 0;
    while(getline(cin, inp)){
        v.push_back(inp);
        if(inp.length() > maxl){
            maxl = inp.length();
        }
    }
    for(int i = 0; i < maxl; i++){
        for(int j = (v.size() - 1); j >= 0; j--){
            if(i < v[j].length()){
                cout << v[j][i];
            } else {
                cout << ' ';
            }
        }
        cout << endl;
    }
}