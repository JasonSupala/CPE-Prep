#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(){
    int n;
    while(cin >> n){
        if(n == 0){
            break;
        }
        string binary = "";
        int par = 0;
        while(n > 0){
            if(n % 2 == 1){
                binary += '1';
                par++;
            }else {
                binary += '0';
            }
            n /= 2;
        }
        reverse(binary.begin(), binary.end());
        cout << "The parity of " << binary << " is " << par << " (mod 2)." << endl;

    }

    return 0;
}