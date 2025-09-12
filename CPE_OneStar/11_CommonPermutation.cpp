#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(){
    string a, b;
    while(getline(cin, a) && getline(cin, b)){
        int acount[26] = {0};
        int bcount[26] = {0};
        
        for(char c : a){
            acount[c - 'a']++;
        }

        for(char c : b){
            bcount[c - 'a']++;
        }

        string output = "";
        for(int i = 0; i < 26; i++){
            int common = min(acount[i], bcount[i]);
            for(int j = 0; j < common; j++){
                output += char('a' + i);
            }
        }
        cout << output << endl;
    }

    return 0;
}