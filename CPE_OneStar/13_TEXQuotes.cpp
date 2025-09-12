#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(){
    bool first = true;
    string inp;
    while(getline(cin, inp)){
        for(int i = 0; i < inp.length(); i++){
            if(inp[i] == '"' && first == true){
                cout << "``";
                first = false;
            } else if(inp[i] == '"' && first == false){
                cout << "''";
                first = true;
            } else {
                cout << inp[i];
            }
        }
        cout << endl;
    }

    return 0;
}