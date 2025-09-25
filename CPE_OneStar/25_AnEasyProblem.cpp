#include <bits/stdc++.h>
#include <cctype>
#include <string>

using namespace std;

int main(){
    string r;
    while(getline(cin, r)){
        long long sum = 0;
        int max = 1;
        int n = 0;
        for(int i = 0; i < r.size(); i++){
            if(r[i] >= '0' && r[i] <= '9') n = r[i] - '0';
            if(r[i] >= 'A' && r[i] <= 'Z') n = r[i] - 'A' + 10;
            if(r[i] >= 'a' && r[i] <= 'z') n = r[i] - 'a' + 36;
            sum += n;
            if(n > max){
                max = n;
            }
        }
        int min = max + 1;
        bool found = false;
        for(int i = min; i <= 62; i++){
            if(sum % (i - 1) == 0){
                cout << i << endl;
                found = true;
                break;
            }
        }
        if(!found){
            cout << "such number is impossible!" << endl;
        }
    }
    return 0;
}