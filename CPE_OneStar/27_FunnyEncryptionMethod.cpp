#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        int bin = a;
        int b1 = 0;
        while(bin > 0){
            if(bin % 2 == 1){
                b1++;
            }
            bin /= 2;
        }
        int hex = a;
        int mult = 1;
        int hexnum = 0;
        while(hex > 0){
            hexnum += (hex % 10) * mult;
            hex /= 10;
            mult *= 16;
        }
        int b2 = 0;
        while(hexnum > 0){
            if(hexnum % 2 == 1){
                b2++;
            }
            hexnum /= 2;
        }
        cout << b1 << " " << b2 << endl;
    }

    return 0;
}