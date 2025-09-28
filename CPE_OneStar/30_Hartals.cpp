#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int l = 0; l < n; l++){
        int days, t;
        cin >> days;
        cin >> t;
        int hart[t];
        for(int i = 0; i < t; i++){
            cin >> hart[i];
        }
        int offs = 0;
        for(int i = 1; i <= days; i++){
            for(int j = 0; j < t; j++){
                if(i % hart[j] == 0 && (i % 7 != 6 && i % 7 != 0)){
                    offs++;
                    break;
                }
            }
        }
        cout << offs << endl;
    }

    return 0;
}