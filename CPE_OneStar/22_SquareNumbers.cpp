#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main(){
    int a, b;
    while(cin >> a >> b){
        if(a == 0 && b == 0){
            break;
        }
        int n = sqrt(a);
        if((n * n) < a){
            n++;
        }
        int count = 0;
        while(1){
            if((n * n) <= b) {
                count++;
            } else if((n * n) > b){
                break;
            }
            n++;
        }
        cout << count << endl;
    }


    return 0;
}