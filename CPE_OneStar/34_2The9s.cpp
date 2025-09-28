#include <bits/stdc++.h>

using namespace std;

int main(){
    string inp;
    while(getline(cin, inp)){
        if(inp[0] == '0') break;
        int sum = 0;
        for(int i = 0; i < inp.size(); i++){
            sum += inp[i] - '0';
        }
        int deg = 1;
        if(sum % 9 != 0){
            cout << inp << " is not a multiple of 9." << endl;
            continue;
        }
        while(sum >= 10){
            int n = 0;
            while(sum > 0){
                n += sum % 10;
                sum /= 10;
            }
            sum = n;
            deg++;
        }
        cout << inp << " is a multiple of 9 and has 9-degree " << deg << "." << endl;
    }
    return 0;
}